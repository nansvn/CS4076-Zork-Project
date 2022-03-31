#include "Entourage.h"

Entourage *entourage_ptr;

Entourage::Entourage(string des)
    :Character(des)
{
    entourage_ptr = this;
}


string Entourage::inspire()
{
    string ins = "The noise of fight wakens a goblin. He decides to join you.\n";
    return ins;
}
