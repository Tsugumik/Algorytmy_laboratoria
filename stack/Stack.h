#pragma once
#include <stdexcept>
#include "../linked_list/LinkedList.h"

/**
 * @brief Klasa szablonowa reprezentująca stos.
 *
 * Stos jest zaimplementowany przy użyciu listy powiązanej.
 *
 * @tparam T - Typ elementów przechowywanych na stosie.
 */
template<typename T>
class Stack {
private:
    unsigned int _size; /**< Rozmiar stosu. */
    LinkedList<T> _linkedList; /**< Lista powiązana używana do przechowywania elementów stosu. */

public:
    /**
     * @brief Konstruktor bezargumentowy.
     *
     * Inicjuje początkowy rozmiar stosu.
     */
    Stack() : _size(0) { }

    /**
     * @brief Dodaje nowy element na sczyt stosu.
     *
     * @param element - Wartość do dodania.
     */
    void push(const T& element) {
        this->_linkedList.add(element);
        this->_size++;
    }

    /**
     * @brief Usuwa element ze szczytu stosu.
     *
     * Rzuca wyjątek std::underflow_error, jeśli stos jest pusty.
     *
     * @return Skopiowana wartość usuwanego elementu.
     */
    T pop() {
        if(this->_size < 1) throw std::underflow_error("Stack underflow: attempting to pop from an empty stack");
        T copy = _linkedList[this->_size - 1];
        _linkedList.pop();
        this->_size -= 1;
        return copy;
    }

    /**
     * @brief Zwraca wartość ze szczytu stosu bez usuwania.
     *
     * Rzuca wyjątek std::underflow_error, jeśli stos jest pusty.
     *
     * @return Referencja do wartości na szczycie stosu.
     */
    const T& top() {
        if(this->_size < 1) throw std::underflow_error("Stack underflow: attempting to access top of an empty stack");
        return this->_linkedList[this->_size - 1];
    }

    /**
     * @brief Zwraca aktualny rozmiar stosu.
     *
     * @return Aktualny rozmiar stosu.
     */
    unsigned int size() {
        return this->_size;
    }
};