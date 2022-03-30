#ifndef FOLLOWER_H
#define FOLLOWER_H

#include "Character.h"
#include <string>

class Entourage : public Character
{
public:
    Entourage(string des);

    virtual string inspire();
};

#endif // FOLLOWER_H
