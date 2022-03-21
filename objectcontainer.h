#ifndef OBJECTCONTAINER_H
#define OBJECTCONTAINER_H

#include <vector>
#include <string>
using namespace std;

// 3. Templates
template <typename E>
class ObjectContainer {
private:
    vector<E> objects;

public:
    typedef typename vector<E>::iterator iterator;
    ObjectContainer();
    ObjectContainer(initializer_list<E> list); //allows use of {} as with a vector
    void addObject(E object);
    E &getObject(int index);
    bool contains(E object);
    void removeObject(E object);
    void removeObject(iterator pos);
    void clear();
    E &getRandomObject();
    E &getRandomObject(int low, int high);
    int size() const;
    iterator begin();
    iterator end();
    // 5. Binary operator overloading
    E &operator[](int i);
    E operator[](int i) const;
    void operator+(E object); //adds an item
    void operator-(E object); //removes and item
    // 4. Unary operator overloading
    operator vector<E>() const; //cast operator
};

#endif // OBJECTCONTAINER_H
