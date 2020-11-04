#include <string>
#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"

using namespace std;

int main()
{

	cout << "Testing Constructor" << endl;
	LinkedList<int> linkedlist1;
	cout << "variable initialized" << endl; 

	cout << "Adding ints to linkedlist1" << endl;
	linkedlist1.add(1);
	cout << "Adding 1: should print 1 from get(0): " << linkedlist1.get(0) << endl;
	linkedlist1.add(3);
	cout << "Adding 3: should print 3 from get(1): " << linkedlist1.get(1) << endl;
	linkedlist1.add(8);
	cout << "Adding 8: should print 8 from get(2): " << linkedlist1.get(2) << endl;

	cout << "-----------------------------------" << endl;

	cout << "testing error throws in get()" << endl;
	try{
		linkedlist1.get(8);
	}
	catch (const invalid_argument& e) {
		printf("exception caught with message: %s\n", e.what());
	}
	//cout << "linked list: " << linkedlist1.toArray() << endl;

	return 0;
}
