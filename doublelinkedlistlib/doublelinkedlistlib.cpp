
#include <iostream>
#include"clsDlLinkedList.h"
using namespace std;

int main()
{
	clsDlLinkedList<int>MydlLinkedList;
	MydlLinkedList.InsertAtBeginning(1);
	MydlLinkedList.InsertAtBeginning(2);
	MydlLinkedList.InsertAtBeginning(3);
	MydlLinkedList.InsertAtBeginning(4);
	MydlLinkedList.InsertAtBeginning(5);
	cout << endl << "Linked List Content:" << endl;
	MydlLinkedList.PrintList();

	return 0;
}

