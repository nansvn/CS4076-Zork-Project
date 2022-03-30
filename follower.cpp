#include "follower.h"

Entourage *entourage_ptr;

Entourage::Entourage(string des)
    :Character(des)
{
    entourage_ptr = this;
}


string Entourage::inspire()
{
    string ins = "A goblin is waken by the noise of fight. He decides to join you.\n";
    return ins;
}
