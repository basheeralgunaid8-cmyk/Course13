#pragma once

#include<iostream>
#include<string>
using namespace std;

template<class T>

class Node
{
public:
	T  _value;
	Node* next;
	Node* prev;

	Node(T Value)
	{
		this->_value = Value;
		this->prev = nullptr;
		this->next = nullptr;
	}
};
template<class T>
class clsDlLinkedList
{
public:

	Node<T>*head;

	clsDlLinkedList()
	{
		head = nullptr;
		
	}
	void InsertAtBeginning(T Value)
	{

		Node<T>* newNode = new Node<T>(value);
		newNode->next = head;
		newNode->prev = NULL;
		if (newNode->prev != NULL)
		{
			head->prev = newNode;
		}
		head = newNode;
	}
	Node<T>* Find(T value)
	{
		while (head != NULL)
		{
			if (head->_value = value)
			{
				return value;
			}
			head = head->next;
		}

		return NULL;
	}
	void InsertAfter(Node<T>*&current,T value)
	{
		Node<T>* newNode = new Node<T>(value);
		newNode->next = current->next;
		newNode->prev = current;
		if (current->next != NULL)
		{
			current->next->prev = newNode;
		}
		current->next = newNode;
	}
	void InsertAtEnd(T value)
	{

		Node<T>* newNode = new Node<T>(value);
		newNode->next = NULL;
		if (head == NULL)
		{
			head->prev = NULL;
			head = newNode;
		}
		else
		{
			Node<T>* current = head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = newNode;
			current->prev = newNode;
		}
	}

	void DeleteNode(Node<T>*& NodeToDelete)
	{
		if (head == NULL || NodeToDelete == NULL) {
			return;
		}
		if (head == NodeToDelete) {
			head = NodeToDelete->next;
		}
		if (NodeToDelete->next != NULL) {
			NodeToDelete->next->prev = NodeToDelete->prev;
		}
		if (NodeToDelete->prev != NULL) {
			NodeToDelete->prev->next = NodeToDelete->next;
		}
		delete NodeToDelete;
	}
	void DeleteFirstNode(Node<T>*& head)
	{
		if (head == nullptr)
		{
			return;
		}

		Node<T>* temp = head;
		head = head->next;
		if (head != nullptr)
		{
			head->prev = nullptr;
		}
		delete temp;

	}

	void DeleteLastNode(Node<T>*& head)
	{
		if (head == NULL)
		{
			return;
		}
		if (head != NULL)
		{
			delete head;
			head = NULL;
			return;
		}
		Node<T>* current = head;
		while (current->next->next != NULL)
		{
			current=current->next;
		}
		Node<T>* temp = current->next;
		current->next = NULL;
		delete temp;
	}
	void PrintNodeDetails()
	{

		if (head->prev != NULL)
			cout << head->prev->value;
		else
			cout << "NULL";

		cout << " <--> " << head->value << " <--> ";

		if (head->next != NULL)
			cout << head->next->value << "\n";
		else
			cout << "NULL";

	}
	void PrintList()

	{
		cout << "NULL <--> ";
		while (head != NULL) {
			cout << head->value << " <--> ";
			head = head->next;
		}
		cout << "NULL";

	}
};



