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

template <class T>  // figure out how to access data and return it
T LinkedList<T>::get(int index) const{
	typename std::list<T>::iterator it = myList.begin();
	int tempCounter{0};
	while (tempCounter <= myList.size()){
		if (tempCounter == index)
		{
			return T;
		}
		tempCounter++;
	}
}

template <class T>
T LinkedList<T>::remove(int index){

}

template <class T>
std::vector<T> LinkedList<T>::toArray() const{

}

template <class T>
LinkedList<T>& operator+=(const T& item){
	
}

