#pragma once

#include "../linked_list/LinkedList.h"

/**
 * @brief Klasa reprezentująca kolejkę opartą na liście powiązanej.
 *
 * @tparam T Typ przechowywanych elementów.
 */
template<typename T>
class Queue {
private:
    unsigned int _size; /**< Liczba elementów w kolejce. */
    LinkedList<T> _linkedList;  /**< Lista powiązana używana do przechowywania elementów kolejki. */
public:
    /**
     * @brief Konstruktor domyślny inicjalizujący rozmiar kolejki na 0.
     */
    Queue() : _size(0) { }

    /**
     * @brief Sprawdza, czy kolejka jest pusta.
     *
     * @return true, jeśli kolejka jest pusta, false w przeciwnym razie.
     */
    bool isEmpty() const {
        return this->_size == 0;
    }

    /**
     * @brief Zwraca liczbę elementów w kolejce.
     *
     * @return Liczba elementów w kolejce.
     */
    unsigned int size() const {
        return this->_size;
    }

    /**
     * @brief Dodaje nowy element do kolejki.
     *
     * @param element Element do dodania.
     */
    void add(const T& element) {
        this->_linkedList.push(element);
        this->_size += 1;
    }

    /**
     * @brief Zwraca referencję do pierwszego elementu kolejki.
     *
     * @return Referencja do pierwszego elementu kolejki.
     * @throws std::underflow_error Jeśli kolejka jest pusta.
     */
    const T& first() {
        if(this->isEmpty()) {
            throw std::underflow_error("Queue is empty. Cannot retrieve the first element.");
        }

        return this->_linkedList[this->_size-1];
    }

    /**
     * @brief Usuwa i zwraca pierwszy element kolejki.
     *
     * @return Usunięty element kolejki.
     * @throws std::underflow_error Jeśli kolejka jest pusta.
     */
    T pop() {
        if(this->isEmpty()) {
            throw std::underflow_error("Queue is empty. Cannot pop from an empty queue.");
        }

        T copy = this->_linkedList.end()->getRef();
        this->_linkedList.pop();

        this->_size -= 1;

        return copy;
    }
};