#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include<string>
#include<vector>

#include "item.h"
#include "Room.h"
#include "objectcontainer.h"

using namespace std;


class Character:public QObject
{
    Q_OBJECT;

private:
    string name;
    int hunger;
    Room *currentRoom;
    ObjectContainer<Item*> backpack;

    const int moveHungerLose;
    const int actionHungerLose;
    const int teleportHungerCost;


public:
    Character(string name);
    ~Character();

    string getName();
    int getHunger() const;
    Room *getCurrentRoom();

    void addItem(Item *item);
    void removeItem(Item *item);
    bool hasItem(Item *item);

    void setName(string name);
    void setHunger(int hunger);
    void setCurrentRoom(Room *next);

    /*** Friends */
    friend class MainWindow;
    friend class ZorkUL;

signals:
    void gameWon();
    void gameLost();
};

#endif // CHARACTER_H
