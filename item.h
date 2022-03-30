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
//	int weightGrams;
//	float value;
//	bool weaponCheck;

//    int health;
//    int attack;
//    int stamina = 0;

public:

    int health;
    int attack;
    int stamina = 0;

//    Item (string description, int inWeight, float inValue);
    Item (string indescription, int inhealth, int inattack);
    Item (string indescription, int inhealth, int instamina, int inattack);
    Item (string indescription);
    string getShortDescription();
    string getLongDescription();
    string getOtherInfo();
//	int getWeight();
//	void setWeight(int weightGrams);
//	float getValue();
//	void setValue(float value);
//	int getWeaponCheck();
//	void setWeaponCheck(int weaponCheck);
    void setHealth(int inhealth);
    void setStamina(int instamina);
    void setAttack(int inattack);
};

#endif /*ITEM_H_*/
