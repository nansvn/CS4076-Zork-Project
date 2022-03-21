#include "item.h"


Item::Item(string name)
{
    this->name=name;
}

Item::Item(string name, int ID, string description){
    this->name=name;
    this->ID=ID;
    this->description=description;
}

Item::~Item(){}



string Item::getItemName(){
    return name;
}

string Item::getItemDescription(){
    return description;
}

int Item::getItemID(){
    return ID;
}

bool Item::isOwned() const{
    return owned;
}
