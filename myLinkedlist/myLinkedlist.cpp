
#include <iostream>
#include"clsDlLinkedList.h"
using namespace std;

int main()
{
	clsDlLinkedList<int>MydlLinkedList;
	
	MydlLinkedList.InsertAtBeginning(5);
	MydlLinkedList.InsertAtBeginning(4);
	MydlLinkedList.InsertAtBeginning(3);
	MydlLinkedList.InsertAtBeginning(2);
	MydlLinkedList.InsertAtBeginning(1);
	cout << endl << "Linked List Content:" << endl;
	MydlLinkedList.PrintList();
	MydlLinkedList.InserAfter(3, 500);
	cout << endl << "Linked List Content After inserting :" << endl;
	MydlLinkedList.PrintList();
	
		return 0;
}

