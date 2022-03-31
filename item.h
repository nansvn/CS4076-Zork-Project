#ifndef ITEM_H_
#define ITEM_H_

#include <map>
#include <string>
#include <iostream>
using namespace std;

class Item {

    friend Item operator +(const Item &A, const Item &B);

private:
    string description;
    string longDescription;

public:

    int health;
    int attack;
    int stamina = 0;

    Item (string indescription, int inhealth, int inattack);
    Item (string indescription, int inhealth, int instamina, int inattack);
    Item (string indescription);

    string getShortDescription();
    string getLongDescription();
    string getOtherInfo();

    void setHealth(int inhealth);
    void setStamina(int instamina);
    void setAttack(int inattack);
};

#endif /*ITEM_H_*/
