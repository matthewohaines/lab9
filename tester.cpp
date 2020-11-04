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
		printf("trying to access element 8 gives message: %s", e.what());
		cout << 8 << " size is : " << linkedlist1.size() << endl;
	}

	try{
                linkedlist1.get(-1);
        }
        catch (const invalid_argument& e) {
                printf("trying to access element -1 gives message: %s", e.what());
                cout << -1 << " size is : " << linkedlist1.size() << endl;
        }

	cout << "-----------------------------------" << endl;

	cout << "testing remove function" << endl;

	cout << "size: " << linkedlist1.size() << endl;
	linkedlist1.remove(0);
	cout << "removing first element/head" << endl;
	cout << "size: " << linkedlist1.size() << endl;

	cout << "-----------------------------------" << endl;

	cout << "size: " << linkedlist1.size() << endl;
        linkedlist1.remove(1);
        cout << "removing last element/tail" << endl;
        cout << "size: " << linkedlist1.size() << endl;

	cout << "-----------------------------------" << endl;

	cout << "clearing list and attempting ot access empty list" << endl;

	cout << "removing last element" << endl;
	linkedlist1.remove(0);
	cout << "size: " << linkedlist1.size() << endl; 

	try{
                linkedlist1.get(8);
        }
        catch (const invalid_argument& e) {
                printf("trying to access empty list gives message: %s", e.what());
                cout << 0 << " size is : " << linkedlist1.size() << endl;
	}

	cout << "-----------------------------------" << endl;

	cout << "testing operator overload" << endl;
	
	cout << "adding 1" << endl;
	linkedlist1+=3;
	cout << linkedlist1.size() << endl;


	cout << "-----------------------------------" << endl;

	cout << "testing toArray method" << endl;
	cout << "making new linklist of chars" << endl;
	LinkedList<char> linkedlistchar;
	cout << "adding chars to linked list of chars" << endl;
	linkedlistchar.add('a');
	linkedlistchar.add('b');
	linkedlistchar.add('c');
	cout << "Expected toArray output: a b c" << endl;
	cout << "Observed toArray output: " << endl;
	vector<char> v = linkedlistchar.toArray();
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}


	return 0;
}