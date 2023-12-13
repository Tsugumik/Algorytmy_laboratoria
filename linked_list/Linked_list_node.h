#pragma once

template<typename T>
class Linked_list_node {
private:
    T *_valueAddress;
    Linked_list_node<T> *_nextEntityAddress;
public:
    Linked_list_node() : _valueAddress(new T()), _nextEntityAddress(nullptr) { }

    explicit Linked_list_node(const T& value) : _valueAddress(new T(value)), _nextEntityAddress(nullptr) { }

    ~Linked_list_node() {
        delete this->_valueAddress;
    }

    T &getRef() {
        return *(this->_valueAddress);
    }

    void set(T value) {
        *(this->_valueAddress) = value;
    }

    void setNextEntityAddress(Linked_list_node<T> *address) {
        this->_nextEntityAddress = address;
    }

    Linked_list_node<T> *getNextEntityAddress() {
        return this->_nextEntityAddress;
    }
};

