#pragma once

#include <stdexcept>
#include "LinkedListNode.h"

/**
 * @brief Klasa szablonowa reprezentująca listę powiązaną.
 *
 * Klasa ta korzysta z LinkedListNode jako węzła.
 *
 * @tparam T - Typ elementów przechowywanych w liście.
 */
template<typename T>
class LinkedList {
private:
    unsigned int _size; /**< Rozmiar listy. */
    LinkedListNode<T> *_firstElementAddress; /**< Wskaźnik do pierwszego węzła. */
    LinkedListNode<T> *_lastElementAddress; /**< Wskaźnik do ostatniego węzła. */
public:
    /**
     * @brief Konstruktor bezargumentowy.
     *
     * Inicjuje listę jako pustą, ustawiając rozmiar na 0 oraz wskaźniki pierwszego i ostatniego elementu na nullptr.
     */
    LinkedList() : _size(0), _firstElementAddress(nullptr), _lastElementAddress(nullptr) {}

    /**
     * @brief Destruktor.
     *
     * Usuwa wszystkie elementy listy przy zwalnianiu pamięci.
     */
    ~LinkedList() {
        LinkedListNode<T> *nextElementAddress = this->_firstElementAddress;
        for (int i = 0; i < this->_size; i++) {
            LinkedListNode<T> *tmp = nextElementAddress->getNextEntityAddress();
            delete nextElementAddress;
            nextElementAddress = tmp;
        }
    }

    /**
     * @brief Operator indeksowania.
     *
     * Pozwala na dostęp do elementu listy o podanym indeksie.
     * Rzuca wyjątek std::out_of_range, jeśli indeks jest poza zakresem.
     *
     * @param n - Indeks elementu listy.
     * @return Referencja do wartości elementu listy.
     */
    T &operator[](unsigned int n) {
        if (n >= this->_size) {
            throw std::out_of_range("Index out of range");
        }

        if (n == 0) {
            return _firstElementAddress->getRef();
        } else if (n == this->_size - 1) {
            return _lastElementAddress->getRef();
        } else {
            LinkedListNode<T> *searchAddress = _firstElementAddress->getNextEntityAddress();
            for (int i = 1; i <= n; i++) {
                if (i == n) {
                    return searchAddress->getRef();
                }

                LinkedListNode<T> *tmpAddress = searchAddress->getNextEntityAddress();
                searchAddress = tmpAddress->getNextEntityAddress();
            }
        }
    }


    /**
     * @brief Dodaje nowy element na koniec listy.
     *
     * @param value - Wartość do dodania.
     */
    void add(const T &value) {
        auto *tmp = new LinkedListNode<T>(value);

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
     * @brief Dodaje nowy element na początek listy.
     *
     * @param value - Wartość do dodania.
     */
    void push(const T &value) {
        auto *tmp = new LinkedListNode<T>(value);

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
     * @brief Usuwa ostatni element z listy.
     *
     * Rzuca wyjątek std::out_of_range, jeśli lista jest pusta.
     */
    void pop() {
        if (this->_size == 0) {
            throw std::out_of_range("Linked list is empty");
        } else if (this->_size == 1) {
            delete this->_firstElementAddress;
            this->_firstElementAddress = nullptr;
        } else if (this->_size == 2) {
            delete this->_lastElementAddress;
            this->_lastElementAddress = this->_firstElementAddress;
        } else {
            LinkedListNode<T> *searchAddress = _firstElementAddress->getNextEntityAddress();
            for (int i = 1; i < this->_size - 2; i++) {
                LinkedListNode<T> *tmp = searchAddress->getNextEntityAddress();
                searchAddress = tmp;
            }

            delete this->_lastElementAddress;
            searchAddress->setNextEntityAddress(nullptr);
            _lastElementAddress = searchAddress;
        }

        this->_size -= 1;
    }

};