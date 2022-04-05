#ifndef OBJECT_H_
#define OBJECT_H_
#include <map>
#include <string>
#include <iostream>
using namespace std;

class Object {
    //friend && overload && reference
    friend Object operator+ (const Object &A, const Object &B);

protected:
    string description;

public:
    /*Bit structures*/
    int health:16;  //max health 1050
    int stamina:16;  //max stamina 1000
    int attack:8;   //max attack 50

public:
    Object (string indescription);
    Object (string indescription, int inhealth, int inattack);
    Object (string indescription, int inhealth, int instamina, int inattack);
    string getShortDescription();
    string getOtherInfo();
    int getHealth() const;
    int getStamina() const;
    int getAttack() const;

    //Template
    template <typename T>
    void setHealth(const T& inhealth);

    template <typename T>
    void setStamina(const T& instamina);

    template <typename T>
    void setAttack(const T& inattack);


};

#endif /*OBJECT_H_*/
