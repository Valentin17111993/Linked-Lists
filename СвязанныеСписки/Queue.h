#pragma once
#include <iostream>
#include "List.h"
using namespace std;

class Queue
{
	public:
		Queue();
		void enQueue(int x); //добавить элемент в конец очереди.
		void deQueue(); // удалить элемент из начала очереди.
		int peek(); // получить значение передней части очереди(первого в очереди), не удаляя ее.
		bool isEmpty(); //  проверка, пуста ли очередь.
	private:
		Node* m_front;
		Node* m_rear;
};
