#ifndef OBJECT_H_
#define OBJECT_H_

#include <map>
#include <string>
#include <iostream>
using namespace std;

class Object {

    friend Object operator+ (const Object &A, const Object &B);

private:
    string description;
    string longDescription;

public:

    int health:16;
    int attack:8;
    int stamina:16;

    Object (string indescription, int inhealth, int inattack);
    Object (string indescription, int inhealth, int instamina, int inattack);
    Object (string indescription);

    string getShortDescription();
    string getLongDescription();
    string getOtherInfo();

    void setHealth(int inhealth);
    void setStamina(int instamina);
    void setAttack(int inattack);
};

#endif /*OBJECT_H_*/
