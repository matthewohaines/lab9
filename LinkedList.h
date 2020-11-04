#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <string>
#include <list>
#include <vector>

template <class T>
class LinkedList
{

  private:
  	int numEntries;
  	std::list<T> myList;


  public:
  	LinkedList();
  	LinkedList(LinkedList<T>& list);
  	~LinkedList();

    void add(T element);
    int size() const;
    T get(int index) const;
    T remove(int index);
    std::vector<T> toArray() const;
    LinkedList<T>& operator+=(const T& item);


};

#endif