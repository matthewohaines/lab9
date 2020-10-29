#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <string>

using namespace std;

template <class T>
class LinkedList{

  private:
  	int numEntries;
  	typename std::list<T>::iterator it = theList.begin();

  public:
  	LinkedList();
  	~LinkedList();

    void add(T element);
    int size() const;
    T get(int index) const;
    T remove(int index);
    vector<T> toArray() const;
    LinkedList<T>& operator+=(const T& item)



};

#endif