#include "Room.h"
#include "Command.h"

//constructors
Room::Room(string description, string path, bool locked) {
    this->path = path;
    this->description = description;
    this->locked=locked;
}

Room::Room(string description, string path, bool locked, int keyID) {
    this->path = path;
    this->description = description;
    this->locked=locked;
    this->keyID=keyID;
}


//set room exits
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

//check if door is locked
bool Room::isLocked(){
    return this->locked;
}

void Room::setLocked(bool locked){
     this->locked = locked;
}

bool Room::openDoor(Item item){
    int keyOfRoom = item.getItemID();
    if(keyOfRoom == keyID)
    {
        setLocked(false);
        return true;
    }
    else
    {
        return false;
    }
}

string Room::getDescription() {
	return description;
}


string Room::exitString() {
	string returnString = "\nexits =";
	for (map<string, Room*>::iterator i = exits.begin(); i != exits.end(); i++)
		// Loop through map
		returnString += "  " + i->first;	// access the "first" element of the pair (direction as a string)
	return returnString;
}

Room* Room::nextRoom(string direction) {
	map<string, Room*>::iterator next = exits.find(direction); //returns an iterator for the "pair"
	if (next == exits.end())
		return NULL; // if exits.end() was returned, there's no room in that direction.
	return next->second; // If there is a room, remove the "second" (Room*)
				// part of the "pair" (<string, Room*>) and return it.
}


void Room::addItem(Item *inItem) {
    //cout <<endl;
    //cout << "Just added" + inItem->getLongDescription();
    itemsInRoom.push_back(inItem);
}


int Room::numberOfItems() {
    return itemsInRoom.size();
}


