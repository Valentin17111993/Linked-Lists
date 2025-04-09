#pragma once

class Node
{
	public :
		Node(int data);
		int m_data;
		Node* m_next;
};

class List
{
	public:
		List();
		void push_back(int data);
		void push_front(int data);
		void insert(int pos, int data);
		void show();
		void deleteNode(int data);
		void deleteNodePosition(int position);
		void clear();
		bool find(int data);
		~List();
	private:
		Node* m_head;
};