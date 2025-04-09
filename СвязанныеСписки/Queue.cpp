#pragma once
#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue() : m_front(nullptr), m_rear(nullptr) 
{
}

void Queue::enQueue(int x)
{
	Node* node = new Node(x);

	if (m_rear == nullptr)
	{
		m_front = m_rear = node;
		return;
	}
	m_rear->m_next = node;
	m_rear = node;
}

void Queue::deQueue()
{
	if (m_front == nullptr)
		return;
	// удаляем первый узел в очереди
	Node* temp = m_front;
	m_front = m_front->m_next;
	// если очередь пуста, необходимо обновить значение m_rear
	if (m_front == nullptr)
		m_rear = nullptr;

	delete temp;
}

int Queue :: peek()
{
	if (m_front == nullptr)
		return 0;
	return m_front->m_data;
}

bool Queue::isEmpty()
{
	return (m_front == nullptr && m_rear == nullptr);
}