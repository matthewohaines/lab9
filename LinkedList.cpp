#include "LinkedList.h"
#include <iostream>

using namespace std;


// constructor template class
template <class T>
LinkedList<T>::LinkedList()
{
	list<T> myList;
}

template <class T>
LinkedList<T>::LinkedList(LinkedList& list) 
{
	std::list<T> myList = list;
}

template <class T> 
LinkedList<T>::~LinkedList() {}

template <class T>
void LinkedList<T>::add(T element) 
{
	myList.push_back(element);
}

template <class T>
int LinkedList<T>::size() const 
{
	typename std::list<T>::const_iterator it = myList.begin();
	int tempCounter{0};
	while (it++ != myList.end()) {
		tempCounter += 1;
	}
	
	return tempCounter;
}

template <class T>
T LinkedList<T>::get(int index) const 
{
	typename std::list<T>::const_iterator it = myList.begin();
	if (index > (int)myList.size() || index < 0 || (int)myList.size() == 0){
		throw std::invalid_argument("invalid index: ");
	}

	for (int i = 0; i < index; i++) {
		it++;
	}
	return(*it);
}

template <class T>
T LinkedList<T>::remove(int index) 
{
	typename std::list<T>::iterator it = myList.begin();
	if (index > (int)myList.size() || index < 0 || (int)myList.size() == 0){
		throw std::invalid_argument("invalid argumet");
	}

	for (int i = 0; i < index; i++) {
		it++;
	}
	T element = *it;
	myList.erase(it);
	return(element);
}

template <class T>
std::vector<T> LinkedList<T>::toArray() const
{
	std::vector<T> vec;
	for (T const &c: myList)
	{
		vec.push_back(c);
	}
	return vec;
}

template <class T>
LinkedList<T>& LinkedList<T>::operator+=(const T& item){
	myList.push_back(item);
	return(*this);	
}
























