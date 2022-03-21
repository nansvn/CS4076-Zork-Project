#ifndef ZORKUL_H_
#define ZORKUL_H_
#include "character.h"
#include "Command.h"
#include "Parser.h"
#include "Room.h"
#include "item.h"
#include <iostream>
#include <string>
using namespace std;

class ZorkUL {
private:
    Character player;
	Parser parser;
	Room *currentRoom;
	void createRooms();
	void printWelcome();
	bool processCommand(Command command);
	void printHelp();
	void goRoom(Command command);
    void createItems();
    void displayItems();

public:
	ZorkUL();
    ~ZorkUL();
	void play();
	string go(string direction);
    Character &getPlayer();
};


#endif /*ZORKUL_H_*/
