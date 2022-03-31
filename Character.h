#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "item.h"
#include <string>

using namespace std;
#include <vector>
using std::vector;


class Character {
private:
	string description;
public:
    void addItem(Item &item);
    void addItem(Item *item);

    vector <Item> itemsInCharacter;
    virtual string inspire();

public:
	Character(string description);
	string shortDescription();
	string longDescription();

};

#endif /*CHARACTER_H_*/
