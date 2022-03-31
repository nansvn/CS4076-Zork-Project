#include "Character.h"
#include "Entourage.h"
Character *character_ptr;

Character::Character(string description) {
	this->description = description;

    character_ptr = this;
}
void Character::addItem(Item &item) {
    itemsInCharacter.push_back(item);
}
void Character::addItem(Item *item) {
    itemsInCharacter.push_back(*item);
    delete item;
}

string Character::longDescription()
{
    string ret;
    for (vector<Item>::iterator i = itemsInCharacter.begin(); i != itemsInCharacter.end(); i++)
        ret += (*i).getShortDescription() + "\n" + (*i).getOtherInfo() + "\n";
    return ret;
}

string Character::inspire(){
    string ins= "Come, monster! I will win the game.";
    return ins;
}

