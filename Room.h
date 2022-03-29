#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <QString>
#include <vector>
#include "item.h"
#include <QPixmap>
using namespace std;
using std::vector;

class Room {

private:
    string description;
    string path;
    map<string, Room*> exits;
    vector <Item> itemsInRoom;
    string exitstring();
    bool locked;

public:
    int numberOfItems();
    Room(string description);
    Room(string description,string path,bool locked=false);
	void setExits(Room *north, Room *east, Room *south, Room *west);
    string shortDescription();
    string longDescription();
    Room* nextRoom(string direction);
    void addItem(Item *inItem);
    string displayItem();
    int isItemInRoom(string instring);
    void removeItemFromRoom(int location);
    Item& getItem(int item);
    bool isLocked();
    void setLocked(bool locked);
};

#endif
