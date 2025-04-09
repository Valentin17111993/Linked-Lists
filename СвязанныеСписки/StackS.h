#pragma once
#include "List.h"
#include <iostream>
using namespace std;

class StackS
{
private:
    Node* m_root = nullptr;
public:
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};