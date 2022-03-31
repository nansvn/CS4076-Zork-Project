#include "Room.h"

Room *room_ptr;

/*default parameters*/
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

/*Deep Copy Constructor*/
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

void Room::addItem(Item *inItem) {
    itemsInRoom.push_back(*inItem);
}

string Room::displayItem() {
    string tempstring = "A demon has taken over the room";
    int sizeItems = (itemsInRoom.size());
    if (itemsInRoom.size() < 1) {
        tempstring = "A quite room.";
        }
    else if (itemsInRoom.size() > 0) {
       int x = (0);
        for (int n = sizeItems; n > 0; n--) {
            tempstring = tempstring + "\n    Name: " +itemsInRoom[x].getShortDescription() + "\n" + itemsInRoom[x].getOtherInfo();
            x++;
            }
        }
    return tempstring;
    }

int Room::numberOfItems() {
    return itemsInRoom.size();
}

int Room::isItemInRoom(string instring)
{
    int sizeItems = (itemsInRoom.size());
    if (itemsInRoom.size() < 1) {
        return -1;
        }
    else if (itemsInRoom.size() > 0) {
       int x = (0);
        for (int n = sizeItems; n > 0; n--) {
            int tempFlag = instring.compare( itemsInRoom[x].getShortDescription());
            if (tempFlag == 0) {
                itemsInRoom.erase(itemsInRoom.begin()+x);
                return x;
            }
            x++;
            }
        }
    return -1;
}

