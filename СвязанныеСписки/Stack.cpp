#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack() : m_top(-1) 
{
}

bool Stack::isEmpty()
{
	return m_top < 0;
}

bool Stack::isFull()
{
	return m_top >= (MAX - 1);
}

bool Stack::push(int x)
{
	if(isFull())
	{
		cout << "Overflow" << endl;
		return false;
	}
	else
	{
		m_top++;
		m_items[m_top] = x;
		return true;
	}
}

int Stack::pop()
{
	if (isEmpty())
	{
		cout << "Stack is Empty" << endl;
		return 0;
	}
	else
	{
		int x = m_items[m_top];
		m_top--;
		return x;
	}
}

int Stack::peek()
{
	if (isEmpty())
	{
		cout << "Stack is Empty" << endl;
		return 0;
	}
	else
	{
		int x = m_items[m_top];
		return x;
	}
}