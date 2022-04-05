#include "Room.h"

Room *room_ptr;

/*Initializer List*/
Room::Room()
    :description{""},index{0},detail{""}
{};

Room::Room(string description,int index) {
    this->description = description;
    this->index = index;
    room_ptr = this;
}

Room::Room(string description,int index, string detail) {
    this->description = description;
    this->index = index;
    this->detail = detail;
    room_ptr = this;
}

/*Shallow Copy Constructor*/
Room::Room(const Room &room){
    description = room.description;
    index = room.index;
    detail = room.detail;
}


int Room::getIndex() {
    return this->index;
}

void Room::setExits(Room *north, Room *east, Room *south, Room *west) {
	if (north != NULL)
		exits["north"] = north;
	if (east != NULL)
		exits["east"] = east;
	if (south != NULL)
		exits["south"] = south;
	if (west != NULL)
		exits["west"] = west;
}

string Room::shortDescription() {
	return description;
}

string Room::longDescription() {
    return "\nYou are at the [" + description + "] now\n" + detail + displayItem() + exitstring();
}

string Room::location() {
    return "\nYour current location is [" + description + "] \n";
}

string Room::exitstring() {
    string returnstring = "\nExits =";
    for (map<string, Room*>::iterator i = exits.begin(); i != exits.end(); i++)
        returnstring += "  " + i->first;
    return returnstring + "\n";
}

Room* Room::nextRoom(string direction) {
    map<string, Room*>::iterator next = exits.find(direction);
	if (next == exits.end())
        return NULL;
    return next->second;
}

void Room::addItem(Object *inItem) {
    bossInRoom.push_back(*inItem);
}

string Room::displayItem() {
    string tempstring = "A demon has taken over the room";
    int sizeItems = (bossInRoom.size());
    if (bossInRoom.size() < 1) {
        tempstring = "A quite room.";
        }
    else if (bossInRoom.size() > 0) {
       int x = (0);
        for (int n = sizeItems; n > 0; n--) {
            tempstring = tempstring + "\n    Name: " +bossInRoom[x].getShortDescription() + "\n" + bossInRoom[x].getOtherInfo();
            x++;
            }
        }
    return tempstring;
    }

int Room::numberOfItems() {
    return bossInRoom.size();
}

int Room::isItemInRoom(string instring)
{
    int sizeItems = (bossInRoom.size());
    if (bossInRoom.size() < 1) {
        return -1;
        }
    else if (bossInRoom.size() > 0) {
       int x = (0);
        for (int n = sizeItems; n > 0; n--) {
            int tempFlag = instring.compare( bossInRoom[x].getShortDescription());
            if (tempFlag == 0) {
                bossInRoom.erase(bossInRoom.begin()+x);
                return x;
            }
            x++;
            }
        }
    return -1;
}

