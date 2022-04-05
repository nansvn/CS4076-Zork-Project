#ifndef CHARACTER_H_
#define CHARACTER_H_
#include "Object.h"
#include <string>
#include <vector>
using namespace std;
using std::vector;


class Character : public Object{
protected:
	string description;

public:
    void addObject(Object &item); //pass by reference
    void addObject(Object *item);
    vector <Object> ObjectOfCharacter;
    virtual string inspire(); //virtual functions

public:
	Character(string description);
	string shortDescription();
	string longDescription();
};

#endif /*CHARACTER_H_*/
