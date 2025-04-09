#include "StackS.h"
#include <iostream>
using namespace std;

bool StackS::push(int x)
{
    Node* node = new Node(x);

    node->m_next = m_root;
    m_root = node;
    return true;
}

int StackS::pop()
{
    Node* node = m_root;

    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    else
    {
        m_root = node->m_next;
        int x = node->m_data;
        delete node;
        return x;
    }
}

int StackS::peek()
{
    Node* node = m_root;

    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    else
    {
        return node->m_data;
    }
}

bool StackS::isEmpty()
{
    return m_root == nullptr;
}