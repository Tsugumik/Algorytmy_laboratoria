#include "HanoiTower.h"

void Tower::push(int value) {
    _data.push(value);
}

int Tower::top() {
    return _data.top();
}

void Tower::pop() {
    _data.pop();
}

bool Tower::isEmpty() const {
    return _data.empty();
}

int Tower::size() const {
    return _data.size();
}

int Tower::getN(unsigned int n) const {
    std::stack<int> tempStack = _data;
    for (unsigned int i = 1; i < n; ++i) {
        tempStack.pop();
    }
    return tempStack.top();
}

void moveDisk(Tower &source, Tower &destination) {
    destination.push(source.top());
    source.pop();
}

void printTowers(const Tower &towerA, const Tower &towerB, const Tower &towerC) {
    std::cout << "Wieża A: ";
    for (int i = towerA.size(); i > 0; i--) {
        std::cout << towerA.getN(i) << " ";
    }

    std::cout << std::endl;

    std::cout << "Wieża B: ";
    for (int i = towerB.size(); i > 0; i--) {
        std::cout << towerB.getN(i) << " ";
    }

    std::cout << std::endl;

    std::cout << "Wieża C: ";
    for (int i = towerC.size(); i > 0; i--) {
        std::cout << towerC.getN(i) << " ";
    }

    std::cout << std::endl;
}

