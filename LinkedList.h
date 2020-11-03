#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

<<<<<<< HEAD
#include <list>
#include <vector>

using namespace std;
=======
#include <string>
#include <list>
#include<vector>
#include <iostream>
>>>>>>> mh2cp

template <class T>
class LinkedList{

  private:
<<<<<<< HEAD
  	list<T> myList;
=======
  	int numEntries;
  	std::list<T> myList;
>>>>>>> mh2cp

  public:
  	LinkedList();
	LinkedList(LinkedList<T>& list);
  	~LinkedList();

<<<<<<< HEAD
    	void add(T element);
    	int size() const;
    	T get(int index) const;
    	T remove(int index);
    	vector<T> toArray() const;
=======
    void add(T element);
    int size() const;
    T get(int index) const;
    T remove(int index);
    std::vector<T> toArray() const;
    LinkedList<T>& operator+=(const T& item);

>>>>>>> mh2cp

    	LinkedList<T>& operator+=(const T& item);

};

#endif
