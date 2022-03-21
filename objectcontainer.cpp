#include "objectcontainer.h"
#include "Room.h"


// 3. Templates
template <typename E>
ObjectContainer<E>::ObjectContainer() {}

template <typename E>
ObjectContainer<E>::ObjectContainer(initializer_list<E> list) : objects(list) {}

template <typename E>
void ObjectContainer<E>::addObject(E object) {
    this->objects.push_back(object);
}

template <typename E>
void ObjectContainer<E>::removeObject(E object) {
    for (auto it = objects.begin(); it != objects.end(); it++) {
        if ((*it) == object) {
            objects.erase(it);
            break;
        }
    }
}

template <typename E>
void ObjectContainer<E>::removeObject(iterator pos) {
    objects.erase(pos);
}

template <typename E>
bool ObjectContainer<E>::contains(E object) {
    for (auto it = objects.begin(); it != objects.end(); it++) {
        if ((*it) == object) {
            return true;
        }
    }

    return false;
}

template <typename E>
void ObjectContainer<E>::clear() {
    objects.clear();
}

template <typename E>
E &ObjectContainer<E>::getObject(int index) {
    return objects[index];
}

template <typename E>
E &ObjectContainer<E>::getRandomObject() {
    return objects[rand() % (int)objects.size()];
}

template <typename E>
E &ObjectContainer<E>::getRandomObject(int low, int high) {
    return objects[rand() % ((high - low) + low)];
}

template <typename E>
int ObjectContainer<E>::size() const {
    return objects.size();
}

template <typename E>
typename ObjectContainer<E>::iterator ObjectContainer<E>::begin() { //typename says ObjectContainer<E>::iterator is a type not a static member
    return objects.begin();
}

template <typename E>
typename ObjectContainer<E>::iterator ObjectContainer<E>::end() {
    return objects.end();
}

template <typename E>
E &ObjectContainer<E>::operator[](int i) {
    return objects[i];
}

template <typename E>
E ObjectContainer<E>::operator[](int i) const {
    return objects[i];
}

template <typename E>
ObjectContainer<E>::operator vector<E>() const {
    return objects;
}

template <typename E>
void ObjectContainer<E>::operator+(E object) {
    this->addObject(object);
}

template <typename E>
void ObjectContainer<E>::operator-(E object) {
    this->removeObject(object);
}


template class ObjectContainer<Item*>;
template class ObjectContainer<Room*>;
