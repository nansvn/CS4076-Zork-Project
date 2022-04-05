#ifndef ROOM_H_
#define ROOM_H_
#include <map>
#include <string>
#include <vector>
#include "Object.h"
using namespace std;
using std::vector;

class Room {
private:
    string description;
    map<string, Room*> exits;
    string exitstring();
    int index=0;
    string detail;

public:
    vector <Object> bossInRoom;
    int getIndex();
    int numberOfItems();
    Room();
    Room(string description, int index);
    Room(string description, int index, string detail);
    Room(const Room &room);    /*Shallow Copy Constructor*/
	void setExits(Room *north, Room *east, Room *south, Room *west);
    string shortDescription();
    string longDescription();
    string location();
    Room* nextRoom(string direction);
    void addItem(Object *inItem);
    string displayItem();
    int isItemInRoom(string instring);
    void removeItemFromRoom(int location);
};

#endif
