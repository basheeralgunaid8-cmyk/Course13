#pragma once

#include<iostream>
#include<string>
using namespace std;

template<class T>

class clsDlLinkedList
{
protected:
	int _Size = 0;
	
public:

	class Node
	{
	public:
		T  _value;
		Node* next;
		Node* prev;

		Node()
		{
			this->prev = nullptr;
			this->next = nullptr;
		}
	};

	Node* head;
	static void _Swaping(Node*& Node1, Node*& Node2)
	{

		Node* Temp = Node1;
		Node1 = Node2;
		Node2 = Temp;

	}
	
	

	clsDlLinkedList()
	{
		this->head = nullptr;

	}
	bool IsEmpty()
	{
		return (head == nullptr);
	}
	void InsertAtBeginning(T Value)
	{

		Node* newNode = new Node();
		newNode->_value = Value;
		newNode->next = head;
		newNode->prev = NULL;
		if (head != nullptr)
		{
			head->prev = newNode;
		}
		head = newNode;
		_Size++;
	}
	Node* Find(T value)
	{
		Node* temp = head;
		while (temp != nullptr)
		{
			if (temp->_value == value)
			{
				return temp;
			}
			temp = temp->next;
		}

		return NULL;
	}
	void InsertAfter(Node*& current, T Value)
	{
		Node* newNode = new Node();
		newNode->_value = Value;
		newNode->next = current->next;
		newNode->prev = current;
		if (current->next != nullptr)
		{
			current->next->prev = newNode;
		}
		current->next = newNode;
		_Size++;
	}
	void InserAfter(short inedex, T value)
	{
		Node* N = GetNode(inedex);
		InsertAfter(N, value);
	}
	void InsertAtEnd(T Value)
	{
		Node* newNode = new Node();
		newNode->_value = Value;
		newNode->next = nullptr;

		if (head == nullptr)
		{
			newNode->prev = nullptr;
			head = newNode;
			return;
		}

		Node* current = head;
		while (current->next != nullptr)
		{
			current = current->next;
		}

		current->next = newNode;
		newNode->prev = current;
		_Size++;
	}

	void DeleteNode(Node*& NodeToDelete)
	{
		if (head == nullptr || NodeToDelete == nullptr) {
			return;
		}
		if (head == NodeToDelete) {
			head = NodeToDelete->next;
		}
		if (NodeToDelete->next != nullptr) {
			NodeToDelete->next->prev = NodeToDelete->prev;
		}
		if (NodeToDelete->prev != nullptr) {
			NodeToDelete->prev->next = NodeToDelete->next;
		}
		delete NodeToDelete;
		_Size--;
	}
	void DeleteFirstNode()
	{
		if (head == nullptr)
		{
			return;
		}

		Node* temp = head;
		head = head->next;
		if (head != nullptr)
		{
			head->prev = nullptr;
		}
		delete temp;
		_Size--;

	}

	void DeleteLastNode()
	{
		if (head == nullptr)
			return;

		if (head->next == nullptr)
		{
			delete head;
			head = nullptr;
			_Size--;
			return;
		}


		Node* current = head;
		while (current->next != nullptr)
		{
			current = current->next;
		}

		current->prev->next = nullptr;
		delete current;
		_Size--;
	}

	void PrintNodeDetails(Node*head)
	{
		if (head == nullptr)
		{
			cout << "List is empty\n";
			return;
		}

		if (head->prev != nullptr)
			cout << head->prev->_value;
		else
			cout << "NULL";

		cout << " <--> " << head->_value << " <--> ";

		if (head->next != nullptr)
			cout << head->next->_value << "\n";
		else
			cout << "NULL\n";
	}

	void PrintList()
	{
		cout << "NULL <--> ";
		Node* temp = head;
		while (temp != nullptr) {
			cout << temp->_value << " <--> ";
			temp = temp->next;
		}
		cout << "NULL";

	}
	void PrintListDetails()

	{
		cout << "\n\n";
		Node* temp = head;
		while (temp != nullptr) {
			PrintNodeDetails(temp);
			temp = temp->next;
		}
	}
	
	//fast way because the O(1)
	int size()
	{
		return _Size;
	}

	void Clear()
	{
		while (head != nullptr)
			DeleteFirstNode();
	}

	void Reverse()
	{
		if (head == nullptr || head->next == nullptr)
			return;

		Node* current = head;
		Node* temp = nullptr;
		while (current != nullptr)
		{
			_Swaping(current->next, current->prev);
			temp = current;
			current = current->prev;
		}
		head = temp;
	}

	Node* GetNode(short Index)
	{
		short counter = 0;

		if (Index > _Size - 1 || Index < 0)
			return nullptr;
		Node* current = head;

		while (current != nullptr)
		{

			if (counter == Index)
				break;
			current = current->next;
			counter++;
		}
		return current;
	}

	T GetItem(short item)
	{
		Node* current = GetNode(item);
		if (current != nullptr)
			return current->_value;
		else
			return nullptr;
	}
	void UpdateItem(short item, short newItem)
	{
		Node* current = GetNode(item);
		if (current == nullptr)
			return;
		else
		current->_value = newItem;
	}

	
};



