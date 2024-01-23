#include "IDataStructure.h"
#include <stack>
#include <vector>
#include <queue>
#include <stdexcept>

template<typename T>
class StackManager : public IDataStructure<T> {
private:
    std::stack<T> _data;
public:
    void add(const T &element) override {
        _data.push(element);
    }

    T pop() override {
        if (isEmpty()) {
            throw std::underflow_error("Stack is empty. Cannot pop from an empty stack.");
        }

        T topElement = _data.top();
        _data.pop();
        return topElement;
    }

    T &first() override {
        if (isEmpty()) {
            throw std::underflow_error("Stack is empty. Cannot retrieve the first element.");
        }

        return _data.top();
    }

    /*
     * Nie powinno się uzyskiwać elementu stosu na jego spodzie
     * dlatego w tym przypadku funkcja zwraca to samo co first()
     */
    T &last() override {
        if (isEmpty()) {
            throw std::underflow_error("Stack is empty. Cannot retrieve the first element.");
        }

        return _data.top();
    }

    T &getN(unsigned int n) override {
        if (n >= size()) {
            throw std::out_of_range("Index out of range.");
        }

        std::stack<T> tempStack = _data;
        for (unsigned int i = 0; i < n; i++) {
            tempStack.pop();
        }

        return tempStack.top();
    }

    bool find(const T &element) override {
        std::stack<T> tempStack = _data;
        while (!tempStack.empty()) {
            if (tempStack.top() == element) {
                return true;
            }
            tempStack.pop();
        }
        return false;
    }

    unsigned int size() override {
        return _data.size();
    }

    bool isEmpty() override {
        return _data.empty();
    }

    StructureType getType() const override {
        return StructureType::STACK;
    }
};

template<typename T>
class QueueManager : public IDataStructure<T> {
private:
    std::queue<T> _data;
public:
    void add(const T &element) override {
        _data.push(element);
    }

    T pop() override {
        if (isEmpty()) {
            throw std::underflow_error("Queue is empty. Cannot pop from an empty queue");
        }

        T frontElement = _data.front();
        _data.pop();
        return frontElement;
    }

    T &first() override {
        if (isEmpty()) {
            throw std::underflow_error("Queue is empty. Cannot retrieve the first element");
        }

        return _data.front();
    }

    T &last() override {
        if (isEmpty()) {
            throw std::underflow_error("Queue is empty. Cannot retrieve the last element");
        }

        return _data.back();
    }

    T &getN(unsigned int n) override {
        if (n >= size()) {
            throw std::out_of_range("Index out of range");
        }

        std::queue<T> tempQueue = _data;
        for (unsigned int i = 0; i < n; ++i) {
            tempQueue.pop();
        }

        return tempQueue.front();
    }

    bool find(const T &element) override {
        std::queue<T> tempQueue = _data;
        while (!tempQueue.empty()) {
            if (tempQueue.front() == element) {
                return true;
            }
            tempQueue.pop();
        }
        return false;
    }

    unsigned int size() override {
        return _data.size();
    }

    bool isEmpty() override {
        return _data.empty();
    }

    StructureType getType() const override {
        return StructureType::QUEUE;
    }
};

template<typename T>
class VectorManager : public IDataStructure<T> {
private:
    std::vector<T> _data;
public:
    void add(const T &element) override {
        _data.push_back(element);
    }

    T pop() override {
        if (isEmpty()) {
            throw std::underflow_error("Vector is empty. Cannot pop from an empty vector.");
        }

        T lastElement = _data.back();
        _data.pop_back();
        return lastElement;
    }

    T &first() override {
        if (isEmpty()) {
            throw std::underflow_error("Vector is empty. Cannot retrieve the first element.");
        }

        return _data.front();
    }

    T &last() override {
        if (isEmpty()) {
            throw std::underflow_error("Vector is empty. Cannot retrieve the last element.");
        }

        return _data.back();
    }

    T &getN(unsigned int n) override {
        if (n >= size()) {
            throw std::out_of_range("Index out of range.");
        }

        return _data[n];
    }

    bool find(const T &element) override {
        for (unsigned int i = 0; i < _data.size(); ++i) {
            if (_data[i] == element) {
                return true;
            }
        }
        return false;
    }

    unsigned int size() override {
        return _data.size();
    }

    bool isEmpty() override {
        return _data.empty();
    }

    StructureType getType() const override {
        return StructureType::VECTOR;
    }
};