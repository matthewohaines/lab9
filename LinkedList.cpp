#include "LinkedList.h"

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
	// new code needed 
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
	typename std::list<T>::iterator it = myList.begin();
	int tempCounter{0};
	while (it.next() != NULL) {
		tempCounter += 1;
	}
	
	return tempCounter;
}

template <class T>
T LinkedList<T>::get(int index) const 
{
	typename std::list<T>::iterator it = myList.begin();
	if (index > myList.size() || index < 0 || myList.size() == 0){
		throw std::invalid_argument("invalid argument");
	}

	for (int i = 0; i < index; i++) {
		it.next();
	}
	return(*it);
}

template <class T>
T LinkedList<T>::remove(int index) 
{
	typename std::list<T>::iterator it = myList.begin();
	if (index > myList.size() || index < 0 || myList.size() == 0){
		throw std::invalid_argument("invalid argume");
	}

	for (int i = 0; i < index; i++) {
		it.next();
	}
	T element = *it;
	myList.erase(it);
	return(element);
}

template <class T>
std::vector<T> LinkedList<T>::toArray() const
{
	typename std::list<T>::iterator it  = myList.begin();
	std::vector<T> vec;
	for (int i = 0; i < myList.size(); ++i)
	{
		T element = *it;
		vec.push_back(element);
	}
	return vec;
}

template <class T>
LinkedList<T>& LinkedList<T>::operator+=(const T& item){
	myList.merge(item);
	return myList;
}



















