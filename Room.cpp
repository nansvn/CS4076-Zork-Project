#include "Room.h"

Room *room_ptr;

Room::Room(string description) {
	this->description = description;

    room_ptr = this;
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
    return "You are in room " + description + ".\n" + displayItem() + exitstring();
}

string Room::exitstring() {
    string returnstring = "\nexits =";
    for (map<string, Room*>::iterator i = exits.begin(); i != exits.end(); i++)
		// Loop through map
        returnstring += "  " + i->first;	// access the "first" element of the pair (direction as a string)
    return returnstring + "\n";
}

Room* Room::nextRoom(string direction) {
    map<string, Room*>::iterator next = exits.find(direction);
	if (next == exits.end())
        return NULL;
    return next->second;
}

void Room::addItem(Item *inItem) {
    //cout <<endl;
    //cout << "Just added" + inItem->getLongDescription();
    itemsInRoom.push_back(*inItem);
}

string Room::displayItem() {
    string tempstring = "The boss of this room is ";
    int sizeItems = (itemsInRoom.size());
    if (itemsInRoom.size() < 1) {
        tempstring = "There is no enemy in the room";
        }
    else if (itemsInRoom.size() > 0) {
       int x = (0);
        for (int n = sizeItems; n > 0; n--) {
            tempstring = tempstring + itemsInRoom[x].getShortDescription() + "\n" + itemsInRoom[x].getOtherInfo();
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

