#pragma once
#include <stdexcept>
#include "Linked_list_node.h"

template<typename T>
class Linked_list {
private:
    unsigned int _size = 0;
    Linked_list_node<T> *_firstElementAddress = nullptr;
    Linked_list_node<T> *_lastElementAddress = nullptr;
public:
    ~Linked_list() {
        Linked_list_node<T> *nextElementAddress = this->_firstElementAddress;
        for (int i = 0; i < this->_size; i++) {
            Linked_list_node<T> *tmp = nextElementAddress->getNextEntityAddress();
            delete nextElementAddress;
            nextElementAddress = tmp;
        }
    }

    T &operator[](unsigned int n) {
        if(n >= this->_size) {
            throw std::out_of_range("Index out of range");
        }

        if (n == 0) {
            return _firstElementAddress->getRef();
        } else if (n == this->_size - 1) {
            return _lastElementAddress->getRef();
        } else {
            Linked_list_node<T> *searchAddress = _firstElementAddress->getNextEntityAddress();
            for (int i = 1; i <= n; i++) {
                if (i == n) {
                    return searchAddress->getRef();
                }

                Linked_list_node<T> *tmpAddress = searchAddress->getNextEntityAddress();
                searchAddress = tmpAddress->getNextEntityAddress();
            }
        }
    }

    /**
     * Dodaje element na końcu listy powiązanej
     * @param value - Nowy element, który zostanie dodany.
     */
    void add(const T& value) {
        auto *tmp = new Linked_list_node<T>(value);

        if (this->_size > 0) {
            _lastElementAddress->setNextEntityAddress(tmp);
            _lastElementAddress = tmp;
        } else {
            _firstElementAddress = tmp;
            _lastElementAddress = tmp;
        }

        this->_size += 1;
    }

    /**
     * Dodaje nowy element na początku listy powiązanej.
     * @param value - Nowy element, który zostanie dodany.
     */
    void push(const T& value) {
        auto *tmp = new Linked_list_node<T>(value);

        if (this->_size > 0) {
            tmp->setNextEntityAddress(_firstElementAddress);
            _firstElementAddress = tmp;
        } else {
            _firstElementAddress = tmp;
            _lastElementAddress = tmp;
        }

        this->_size += 1;
    }

    /**
     * Usuwa ostatni element z listy powiązanej.
     */
    void pop() {
        if(this->_size == 0) {
            throw std::out_of_range("Linked list is empty");
        } else if(this->_size == 1) {
            delete this->_firstElementAddress;
            this->_firstElementAddress = nullptr;
        } else if(this->_size == 2) {
            delete this->_lastElementAddress;
            this->_lastElementAddress = this->_firstElementAddress;
        } else {
            Linked_list_node<T> *searchAddress = _firstElementAddress->getNextEntityAddress();
            for(int i=1; i < this->_size - 2; i++) {
                Linked_list_node<T> *tmp = searchAddress->getNextEntityAddress();
                searchAddress = tmp;
            }

            delete this->_lastElementAddress;
            searchAddress->setNextEntityAddress(nullptr);
            _lastElementAddress = searchAddress;
        }

        this->_size -= 1;
    }

};