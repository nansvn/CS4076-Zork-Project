#include "food.h"
#include "item.h"

Food::Food(string name, int ID, string description, int value, ZorkUL *game)
    :Item(name, ID, description)
{
    this->value=value;
    this->game=game;
}


void Food::eat() {
    Character &player = game->getPlayer();
    player.setHealth(player.getHealth() + value);
}
