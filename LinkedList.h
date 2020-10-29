#include <string>

template <class T>
class LinkedList{

  public:
    void add(T element);
    int size() const;
    T get(int index) const;
    T remove(int index);

    vector<T> toArray() const;

    LinkedList<T>& operator+=(const T& item)



}
