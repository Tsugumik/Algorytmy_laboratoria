#pragma once

/**
 * @brief Klasa szablonowa reprezentująca węzeł listy powiązanej.
 *
 * Klasa zawiera prywatne składowe: _value (reprezentującą wartość węzła)
 * oraz _nextEntityAddress (reprezentującą wskaźnik do następnego węzła na liście).
 *
 * @tparam T - Typ elementu przechowywanego w węźle.
 */
template<typename T>
class LinkedListNode {
private:
    T _value; /**< Wartość przechowywana w węźle. */
    LinkedListNode<T> *_nextEntityAddress; /**< Wskaźnik do następnego węzła */
public:
    /**
     * @brief Konstruktor bezargumentowy.
     *
     * Inicjuje _value wartością domyślną dla typu T, a _nextEntityAddress ustawia na nullptr.
     */
    LinkedListNode() : _value(T()), _nextEntityAddress(nullptr) {}

    /**
     * @brief Konstruktor jednoargumentowy.
     *
     * Inicjuje _value przekazaną wartością, a _nextEntityAddress ustawia na nullptr.
     *
     * @param value - Wartość do ustawienia w węźle.
     */
    explicit LinkedListNode(const T &value) : _value(value), _nextEntityAddress(nullptr) {}

    /**
     * @brief Pobiera referencję do wartości węzła.
     *
     * Umożliwia bezpośredni dostęp i modyfikację wartości węzła.
     *
     * @return Referencja do wartości węzła.
     */
    T &getRef() {
        return this->_value;
    }

    /**
     * @brief Ustawia nową wartość dla węzła.
     *
     * @param value - Nowa wartość do ustawienia w węźle.
     */
    void set(const T &value) {
        this->_value = value;
    }

    /**
     * @brief Ustawia wskaźnik na następny węzeł na liście.
     *
     * @param address - Wskaźnik na następny węzeł.
     */
    void setNextEntityAddress(LinkedListNode<T> *address) {
        this->_nextEntityAddress = address;
    }

    /**
     * @brief Pobiera wskaźnik na następny węzeł na liście.
     *
     * @return Wskaźnik na następny węzeł.
     */
    LinkedListNode<T> *getNextEntityAddress() {
        return this->_nextEntityAddress;
    }
};

