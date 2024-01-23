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

    /**
     * @brief Zwraca rozmiar listy powiązanej.
     * @return Rozmiar listy powiązanej.
     */
    unsigned int size() {
        return this->_size;
    }

    /**
     * @brief Zwraca wskaźnik do pierwszego elementu listy powiązanej.
     * @return Wskaźnik do pierwszego elementu listy powiązanej.
     */
    LinkedListNode<T> *begin() {
        return this->_firstElementAddress;
    }

    /**
     * @brief Zwraca wskaźnik do ostatniego elementu listy powiązanej.
     * @return Wskaźnik do ostatniego elementu listy powiązanej.
     */
    LinkedListNode<T> *end() {
        return this->_lastElementAddress;
    }

    /**
     * @brief Wstawia nowy element przed węzłem wskazywanym przez positionNode.
     *
     * @param value - Wartość do wstawienia.
     * @param positionNode - Węzeł przed którym ma zostać wstawiona nowa wartość.
     *
     * @throw std::invalid_argument Jeśli positionNode jest nullptr.
     * @throw std::out_of_range Jeśli nie znaleziono elementu w liście powiązanej.
     */
    void insert(const T &value, LinkedListNode<T> *positionNode) {
        if (positionNode == nullptr) {
            throw std::invalid_argument("Invalid argument: positionNode is nullptr");
        }

        if (positionNode == this->_firstElementAddress) {
            auto newListNode = new LinkedListNode<T>(value);
            newListNode->setNextEntityAddress(this->_firstElementAddress->getNextEntityAddress());
            this->_firstElementAddress->setNextEntityAddress(newListNode);

            if (this->_size == 1) {
                this->_lastElementAddress = newListNode;
            }
        } else if (positionNode == this->_lastElementAddress) {
            auto newListNode = new LinkedListNode<T>(value);
            this->_lastElementAddress->setNextEntityAddress(newListNode);
            this->_lastElementAddress = newListNode;
        } else {
            auto searchNode = this->_firstElementAddress->getNextEntityAddress();

            while (searchNode != positionNode && searchNode != nullptr) {
                searchNode = searchNode->getNextEntityAddress();
            }

            if (searchNode == nullptr) {
                throw std::out_of_range("Element not found in the linked list");
            }

            auto newListNode = new LinkedListNode<T>(value);
            newListNode->setNextEntityAddress(searchNode->getNextEntityAddress());
            searchNode->setNextEntityAddress(newListNode);
        }

        this->_size += 1;
    }

    /**
     * @brief Usuwa węzeł z listy powiązanej na podstawie podanego adresu.
     *
     * @param positionNode - Adres węzła do usunięcia.
     *
     * @throw std::out_of_range Jeśli lista jest pusta.
     * @throw std::invalid_argument Jeśli positionNode jest nullptr.
     * @throw std::underflow_error Jeśli nie znaleziono adresu w liście powiązanej.
     */
    void erease(LinkedListNode<T> *positionNode) {
        if (this->_size == 0) {
            throw std::out_of_range("Linked list is empty");
        }

        if (positionNode == nullptr) {
            throw std::invalid_argument("Invalid argument: positionNode is nullptr");
        }

        if (positionNode == this->_firstElementAddress || positionNode == this->_lastElementAddress) {
            // Jeśli pierwszy element jest zarówno ostatnim elementem
            if (this->_firstElementAddress == this->_lastElementAddress) {
                delete _firstElementAddress;
                _firstElementAddress = nullptr;
                _lastElementAddress = nullptr;
            } else if (positionNode == this->_firstElementAddress) {
                auto nextNode = _firstElementAddress->getNextEntityAddress();
                delete _firstElementAddress;
                _firstElementAddress = nextNode;
            } else if (positionNode == this->_lastElementAddress) {
                auto searchNode = this->_firstElementAddress;

                while (searchNode->getNextEntityAddress() != this->_lastElementAddress) {
                    searchNode = searchNode->getNextEntityAddress();
                }

                delete _lastElementAddress;

                searchNode->setNextEntityAddress(nullptr);
                this->_lastElementAddress = searchNode;
            }
        } else {
            auto searchNode = this->_firstElementAddress;

            while (searchNode->getNextEntityAddress() != positionNode && searchNode != nullptr) {
                searchNode = searchNode->getNextEntityAddress();
            }

            if (searchNode == nullptr) {
                throw std::out_of_range("Element not found in the linked list");
            }

            searchNode->setNextEntityAddress(positionNode->getNextEntityAddress());
            delete positionNode;
        }

        this->_size -= 1;
    }
};