#include "character.h"
#include <iostream>
#include<vector>
using namespace std;

Character::Character(string description) :
    moveHungerLose(20),actionHungerLose(10),teleportHungerCost(35)
{
    this->description  = description;
    this->hunger = 100;
    this->currentRoom = nullptr;
}


string Character::getDescription()
{
    return description;
}

int Character::getHunger() const
{
    return hunger;
}

Room *Character::getCurrentRoom()
{
    return currentRoom;
}


void Character::setDescription(string description)
{
    this->description = description;
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
    backpack.push_back(item);
}


void Character::removeItem(int ID) {
    int i = 0;
    for(vector<Item*>::iterator it = backpack.begin(); it != backpack.end(); it++)
    {
            if (i == ID)
            {
                delete *it;
                backpack.erase(it);
                break;
            }
            i++;
    }
}

void Character::removeItem(string name)
{
    for(vector<Item*>::iterator it = backpack.begin(); it != backpack.end(); it++)
    {
        if ((*it)->getItemName() == name)
        {
            delete *it;
            backpack.erase(it);
            break;
        }
    }
}

bool Character::hasItem(int ID) {
    for (vector<Item*>::iterator it = backpack.begin(); it != backpack.end(); it++) {
        if ((*it)->getItemID() == ID) {
            return true;
        }
    }
    return false;
}
