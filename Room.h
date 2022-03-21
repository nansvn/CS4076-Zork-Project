#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "item.h"
using namespace std;
using std::vector;


class Room {

private:
	string description;
    string path;
    bool locked;
    int keyID;
	map<string, Room*> exits;
	string exitString();
    vector <Item*> itemsInRoom;

public:
    int numberOfItems();
    Room(string description,string path, bool locked);
    Room(string description,string path, bool locked,int keyID);
	void setExits(Room *north, Room *east, Room *south, Room *west);
    bool isLocked();
    void setLocked(bool locked);
    bool openDoor(Item item);
    string getDescription();
	Room* nextRoom(string direction);
    void addItem(Item *inItem);
    string displayItem();
    int isItemInRoom(string inString);
    void removeItemFromRoom(int location);
};

#endif
