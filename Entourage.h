#ifndef ENTOURAGE_H
#define ENTOURAGE_H

#include "Character.h"
#include <string>

/*inheritance*/
class Entourage : public Character
{
public:
    Entourage(string des);

    virtual string inspire();
};

#endif // ENTOURAGE_H
