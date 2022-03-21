#include "character.h"
#include <iostream>
#include<vector>
using namespace std;

Character::Character(string name) :
    moveHungerLose(20),actionHungerLose(10),teleportHungerCost(35)
{
    this->name  = name;
    this->hunger = 100;
    this->currentRoom = nullptr;
}


string Character::getName()
{
    return name;
}

int Character::getHunger() const
{
    return hunger;
}

Room *Character::getCurrentRoom()
{
    return currentRoom;
}


void Character::setName(string name)
{
    this->name = name;
}

void Character::setHunger(int hunger)
{
    if (hunger <= 0) {
        hunger = 0;
        cout << "Game over" << endl;
    }

    this->hunger = hunger;
}

void Character::setCurrentRoom(Room *next)
{
    currentRoom = next;
}


void Character::addItem(Item *item){
    backpack.addObject(item);
}


void Character::removeItem(Item *item) {
    backpack - item;
}

bool Character::hasItem(Item *item) {
    return backpack.contains(item);
}
