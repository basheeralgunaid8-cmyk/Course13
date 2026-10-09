
#include <iostream>
#include"MyDynamicArray.h"
using namespace std;

int main()
{
    clsDynamicArray<int>MyDynamicList(5);

	MyDynamicList.SetItem(0, 1);
	MyDynamicList.SetItem(1, 2);
	MyDynamicList.SetItem(2, 3);
	MyDynamicList.SetItem(3, 4);
	MyDynamicList.SetItem(4, 5);

	cout << "\nIs Empty? " << MyDynamicList.IsEmpty() << endl;
	cout << "\nArray Size: " << MyDynamicList.Size() << endl;
	cout << "\nArray items:" << endl;

	MyDynamicList.PrintList();
	
    MyDynamicList.InsertAtBeginning(400);
    cout << "\n\nArray after insert 400 at Begining:";
    cout << "\nArray Size: " << MyDynamicList.Size() << "\n";
    MyDynamicList.PrintList();

    MyDynamicList.InsertBefore(2, 500);
    cout << "\n\nArray after insert 500 before index 2:";
    cout << "\nArray Size: " << MyDynamicList.Size() << "\n";
    MyDynamicList.PrintList();

    MyDynamicList.InsertAfter(2, 600);
    cout << "\n\nArray after insert 600 after index 2:";
    cout << "\nArray Size: " << MyDynamicList.Size() << "\n";
    MyDynamicList.PrintList();


    MyDynamicList.InsertAtEnd(800);
    cout << "\n\nArray after insert 800 at End:";
    cout << "\nArray Size: " << MyDynamicList.Size() << "\n";
    MyDynamicList.PrintList();


    system("pause>0");

	return 0;
}

