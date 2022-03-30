#include "item.h"


Item::Item(string indescription, int inhealth, int inattack) {
    description = indescription;
    setHealth(inhealth);
    setAttack(inattack);
}

Item::Item(string indescription, int inhealth, int instamina, int inattack)
{
    description = indescription;
    setHealth(inhealth);
    setStamina(instamina);
    setAttack(inattack);
}

Item::Item(string inDescription) {
	description = inDescription;
}

void Item::setHealth(int inhealth)
{
    health = inhealth;
}

void Item::setStamina(int instamina)
{
    stamina = instamina;
}

void Item::setAttack(int inattack)
{
    attack = inattack;
}


string Item::getShortDescription()
{
	return description;
}

string Item::getLongDescription()
{
	return " item(s), " + description + ".\n";
}

string Item::getOtherInfo()
{
    //int -> string
    std::string health_str = std::to_string(health);
    std::string stamina_str = std::to_string(stamina);
    std::string attack_str = std::to_string(attack);
    if(stamina == 0)//BOSS
        return "Health: " + health_str + "\n" + "Attack: " + attack_str;
    else//Character
        return "Health:  " + health_str + "\n" + "Stamina: " + stamina_str + "\n" + "Attack:  " + attack_str;
}
Item operator +(const Item &A, const Item &B)
{
    Item *item = new Item(A.description, A.health, A.stamina, A.attack);
    item->health += B.health;
    item->stamina += B.stamina;
    item->attack += B.attack;
    return *item;
}
