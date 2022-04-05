#include "Character.h"
#include "Entourage.h"
Character *character_ptr;

Character::Character(string description) : Object(description){
    character_ptr = this;
}
void Character::addObject(Object &item) {
    ObjectOfCharacter.push_back(item);
}

void Character::addObject(Object *item) {
    ObjectOfCharacter.push_back(*item);
    delete item;
}

string Character::longDescription()
{
    string ret;
    for (vector<Object>::iterator i = ObjectOfCharacter.begin(); i != ObjectOfCharacter.end(); i++)
        ret += (*i).getShortDescription() + "\n" + (*i).getOtherInfo() + "\n";
    return ret;
}

string Character::inspire(){
    string ins= "You are the player.";
    return ins;
}

