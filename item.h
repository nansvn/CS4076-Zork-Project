#ifndef ITEM_H_
#define ITEM_H_

#include <map>
#include <string>
#include <iostream>
using namespace std;

class Food;

class Item {
protected:
    string name;
    int ID;
    string description;
    bool owned;

public:
    Item(string name);
    ~Item();
    Item(string name, int ID, string description);
    string getItemName();
    string getItemDescription();
    int getItemID();
};


#endif /*ITEM_H_*/
