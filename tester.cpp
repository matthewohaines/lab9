#include <string>
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{

	cout << "Testing Constructor" << endl;
	LinkedList<int> linkedlist1; 

	cout << "Adding ints to linkedlist1" << endl;
	linkedlist1.add(1);
	linkedlist1.add(3);
	linkedlist1.add(8);
	cout << "linked list: " << linkedlist1.toArray() << endl;



	return 0;
}