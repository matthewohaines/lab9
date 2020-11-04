#include <string>
#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"

using namespace std;

int main()
{

	cout << "Testing Constructor" << endl;
	LinkedList<int> linkedlist1; 

	cout << "Adding ints to linkedlist1" << endl;
	linkedlist1.add(1);
	cout << "Adding 1" << endl;
	linkedlist1.add(3);
	cout << "Adding 3" << endl;
	linkedlist1.add(8);
	cout << "Adding 8" << endl;
	//cout << "linked list: " << linkedlist1.toArray() << endl;

	return 0;
}
