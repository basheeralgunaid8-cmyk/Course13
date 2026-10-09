#pragma once
#pragma once
#include<iostream>
#include"clsDlLinkedList.h"


template<class T>
class clsMyQueue
{
protected :

	clsDlLinkedList <T>_myLinkedList;

public:

	void push(T value)
	{
		_myLinkedList.InsertAtEnd(value);
	}
	void print()
	{
		_myLinkedList.PrintList();
	}
	void pop()
	{
		_myLinkedList.DeleteFirstNode();
	}
	int Size()
	{
		return (_myLinkedList.size());
	}
	bool IsEmpty()
	{
		return _myLinkedList.IsEmpty();
	}

	T front()
	{
		return _myLinkedList.GetItem(0);
	}

	T back()
	{
		return _myLinkedList.GetItem(Size() - 1);
	}
	void Reverse()
	{
		_myLinkedList.Reverse();
	}
	void UpdateItem(T olditem, T newItem)
	{
		_myLinkedList.UpdateItem(olditem, newItem);
	}
	void InsertAfter(T index, T  value)
	{
		_myLinkedList.InserAfter(index, value);
	}
	void InsertAtBack(T value)
	{
		_myLinkedList.InsertAtEnd(value);
	}
	void InsertAtFront(T value)
	{
		_myLinkedList.InsertAtBeginning(value);
	}
	T GetItem(T item)
	{
		return _myLinkedList.GetItem(item);
	}
	void Clear()
	{
		_myLinkedList.Clear();
	}
};

