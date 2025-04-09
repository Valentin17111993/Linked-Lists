#pragma once
#include <iostream>
using namespace std;

#define MAX 1000

class Stack
{
	public:
		int m_items[MAX];
		Stack();
		bool push(int x); // операция добавления элемента на вершину стека
		int pop(); // операция удаления элемента с вершины стека
		int peek(); // операция просмотра элемента с вершины стека без его удаления
		bool isFull(); // утилитарная функция, которая показывает заполнен ли стек
		bool isEmpty(); // операция проверки существования элементов в стеке
	private:
		int m_top;
};