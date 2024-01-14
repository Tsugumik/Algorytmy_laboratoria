#pragma once
#include "../linked_list/LinkedList.h"
#include "PriorityQueueNode.h"

/**
 * @brief Klasa reprezentująca kolejkę priorytetową opartą na liście powiązanej.
 *
 * @tparam T Typ przechowywanych elementów.
 */
template<typename T>
class PriorityQueue {
private:
    unsigned int _size; /**< Liczba elementów w kolejce priorytetowej. */
    LinkedList<PriorityQueueNode<T>> _linkedList; /**< Lista powiązana używana do przechowywania węzłów z elementami. */
public:
    /**
     * @brief Konstruktor domyślny inicjalizujący rozmiar kolejki na 0.
     */
    PriorityQueue() : _size(0) { }

    /**
     * @brief Sprawdza, czy kolejka priorytetowa jest pusta.
     *
     * @return true, jeśli kolejka jest pusta, false w przeciwnym razie.
     */
    bool isEmpty() const {
        return this->_size == 0;
    }

    /**
     * @brief Zwraca liczbę elementów w kolejce priorytetowej.
     *
     * @return Liczba elementów w kolejce.
     */
    unsigned int size() const {
        return this->_size;
    }

    /**
     * @brief Dodaje element o określonym priorytecie do kolejki priorytetowej.
     *
     * @param element Element do dodania.
     * @param priority Priorytet elementu.
     */
    void add(const T& element, int priority) {
         if(this->isEmpty()) {
             this->_linkedList.add(PriorityQueueNode<T>(priority));
             this->_linkedList.begin()->getRef().add(element);
         } else {
             auto it = this->_linkedList.begin();

             while(it != nullptr && it->getRef().getPriority() != priority) {
                 it = it->getNextEntityAddress();
             }

             if(it != nullptr) {
                 it->getRef().add(element);
                 this->_size += 1;
                 return;
             }

             it = this->_linkedList.begin();
             while(it->getNextEntityAddress() != nullptr && it->getNextEntityAddress()->getRef().getPriority() < priority) {
                 it = it->getNextEntityAddress();
             }

             if(it == this->_linkedList.begin()) {
                 if(it->getRef().getPriority() < priority) {
                     this->_linkedList.insert(PriorityQueueNode<T>(priority), it);
                     it->getNextEntityAddress()->getRef().add(element);
                 } else {
                     this->_linkedList.push(PriorityQueueNode<T>(priority));
                     this->_linkedList.begin()->getRef().add(element);
                 }
             } else {
                 this->_linkedList.insert(PriorityQueueNode<T>(priority), it);
                 it->getNextEntityAddress()->getRef().add(element);
             }
         }

         this->_size += 1;
    }

    /**
     * @brief Zwraca referencję do pierwszego elementu w kolejce priorytetowej.
     *
     * @return Referencja do pierwszego elementu w kolejce.
     * @throws std::underflow_error Jeśli kolejka jest pusta.
     */
    const T& first() {
        if(this->isEmpty()) {
            throw std::underflow_error("PriorityQueue is empty. Cannot pop from an empty queue.");
        }

        return this->_linkedList.end()->getRef().first();
    }

    /**
     * @brief Usuwa i zwraca pierwszy element z kolejki priorytetowej.
     *
     * @return Usunięty element z kolejki.
     * @throws std::underflow_error Jeśli kolejka jest pusta.
     */
    T pop() {
        if(this->isEmpty()) {
            throw std::underflow_error("PriorityQueue is empty. Cannot pop from an empty queue.");
        }

        T copy = this->_linkedList.end()->getRef().pop();

        if( this->_linkedList.end()->getRef().isEmpty()) {
            _linkedList.erease(this->_linkedList.end());
        }

        this->_size -= 1;

        return copy;
    }
};