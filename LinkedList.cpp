#include "LinkedList.h"
#include <vector>
#include <list>


// constructor template class
template <class T>
LinkedList<T>::LinkedList() {}

template <class T> 
LinkedList<T>::~LinkedList() {}

template <class T>
void LinkedList<T>::add(T element) {
	myList.push_back(element);
}

template <class T>
int LinkedList<T>::size() const {
	typename std::list<T>::iterator it = myList.begin();
	int tempCounter{0};
	while (it.next != NULL) {
		tempCounter += 1;
	}
	
	return{tempCounter};
}



