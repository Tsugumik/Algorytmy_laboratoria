#pragma once
#include <stack>
#include <iostream>

class Tower {
private:
    std::stack<int> _data;
public:
    void push(int value);
    int top();
    void pop();
    bool isEmpty() const;
    int size() const;
    int getN(unsigned int n) const;
};

void moveDisk(Tower& source, Tower& destination);

void printTowers(const Tower& towerA, const Tower& towerB, const Tower& towerC);