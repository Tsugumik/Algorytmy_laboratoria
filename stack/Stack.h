#pragma once
#include <stdexcept>
#include "../linked_list/Linked_list.h"

template<typename T>
class Stack {
private:
    unsigned int _size;
    Linked_list<T> linkedList;

public:
    Stack() : _size(0) {}

    /**
     * Dodaje element na szczyt stosu.
     * @param element - Element, który zostanie dodany na stos.
     */
    void push(const T& element) {
        this->linkedList.add(element);
        this->_size++;
    }

    /**
     * Usuwa element ze szczytu stosu i zwraca go.
     * @return Usunięty element ze stosu.
     */
    T pop() {
        if(this->_size < 1) throw std::underflow_error("Stack underflow: attempting to pop from an empty stack");
        T copy = linkedList[this->_size - 1];
        linkedList.pop();
        this->_size -= 1;
        return copy;
    }

    /**
     * Zwraca element ze szczytu stosu.
     * @return - Element ze szczytu stosu.
     */
    const T& top() {
        if(this->_size < 1) throw std::underflow_error("Stack underflow: attempting to access top of an empty stack");
        return this->linkedList[this->_size - 1];
    }

    unsigned int size() {
        return this->_size;
    }
};