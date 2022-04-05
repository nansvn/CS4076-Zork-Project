#ifndef ENTOURAGE_H
#define ENTOURAGE_H

#include "Character.h"
#include <string>

/*Inheritance*/
class Entourage : public Character
{
public:
    Entourage(string des);
    virtual string inspire(); //virtual functions
};

#endif // ENTOURAGE_H
