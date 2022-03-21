#ifndef FOOD_H
#define FOOD_H

#include "item.h"
#include "ZorkUL.h"

//Inheritance

class Food : public Item
{
protected:
    ZorkUL *game;
    int value;

public:
    Food(string name, int ID, string description, int value, ZorkUL *game);
    void eat();
};

#endif // FOOD_H
