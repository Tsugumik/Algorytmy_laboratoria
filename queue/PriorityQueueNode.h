#pragma once
#include "Queue.h"

/**
 * @brief Klasa reprezentująca węzeł w kolejce priorytetowej opartej na liście powiązanej.
 *
 * @tparam T Typ przechowywanych elementów.
 */
template<typename T>
class PriorityQueueNode : public Queue<T> {
private:
    int _priority; /**< Priorytet węzła. */
public:
    /**
     * @brief Konstruktor inicjalizujący węzeł z określonym priorytetem.
     *
     * @param priority Priorytet węzła.
     */
    explicit PriorityQueueNode(int priority) : _priority(priority) { }

    /**
     * @brief Pobiera priorytet węzła.
     *
     * @return Priorytet węzła.
     */
    int getPriority() const {
        return this->_priority;
    }
};

