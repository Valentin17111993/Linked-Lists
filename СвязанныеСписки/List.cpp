#include "List.h"
#include <iostream>
using namespace std;

Node::Node(int data) : m_data(data), m_next(nullptr)
{
}

List::List() : m_head(nullptr)
{
}

void List::push_back(int data)
{
	Node* node = new Node(data);
	if (m_head == nullptr)
	{
		m_head = node;
		return;
	}

	Node* last = m_head;

	while(last->m_next != nullptr)
	{
		last = last->m_next;
	}
	last->m_next = node;
	return;
}

void List::push_front(int data)
{
	Node* node = new Node(data);
	node->m_next = m_head;
	m_head = node;
}

void List::insert(int pos, int data)
{
	Node* newNode = new Node(data);
	if (m_head == nullptr)
	{
		m_head = newNode;
		return;
	}
	if (pos == 0)
	{
		newNode->m_next = m_head;
		m_head = newNode;
		return;
	}

	int currPos = 0;
	Node* current = m_head;

	while (currPos < pos - 1 && current->m_next != nullptr)
	{
		current = current->m_next;
		currPos++;
	}
	Node* next = current->m_next;
	current->m_next = newNode;
	newNode->m_next = next;
}

void List::show()
{
	Node* current = m_head;
	while (current != nullptr)
	{
		cout << current->m_data;
		current = current->m_next;
	}
}

void List::deleteNode(int data)
{
	Node* temp = m_head;
	Node* prev = nullptr;

	if (temp && temp->m_data == data)
	{
		m_head = temp->m_next;
		delete temp;
		return;
	}

	while (temp && temp->m_data != data)
	{
		prev = temp;
		temp = temp->m_next;
	}

	if (!temp)
		return;

	prev->m_next = temp->m_next;
	delete temp;
}

void List :: deleteNodePosition(int position)
{
	Node* temp = m_head;
	Node* prev = nullptr;
	int pos = 0;

	if (temp && pos == position)
	{
		m_head = temp->m_next;
		delete temp;
		return;
	}

	while (temp && pos != position)
	{
		prev = temp;
		temp = temp->m_next;
		pos++;
	}

	if (!temp)
		return;

	prev->m_next = temp->m_next;
	delete temp;
}

void List :: clear()
{
	Node* currentNode = nullptr;
	while (m_head != nullptr)
	{
		currentNode = m_head;
		m_head = m_head->m_next;
		cout << "Delete Node with data: " << currentNode->m_data << endl;
		delete currentNode;
	}
}

List :: ~List()
{
	clear();
}

bool List::find(int data)
{
	// ваш код
	Node* node = m_head;

	while (node != nullptr)
	{
		if (node->m_data == data)
		{
			return true;
		}
		else
		{
			node = node->m_next;
		}
	}

	return false;
}