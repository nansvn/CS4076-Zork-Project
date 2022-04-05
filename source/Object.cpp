#include "Object.h"


Object::Object(string indescription, int inhealth, int inattack) {
    description = indescription;
    setHealth(inhealth);
    setAttack(inattack);
}

Object::Object(string indescription, int inhealth, int instamina, int inattack)
{
    description = indescription;
    setHealth(inhealth);
    setStamina(instamina);
    setAttack(inattack);
}

Object::Object(string inDescription) {
	description = inDescription;
}

void Object::setHealth(int inhealth)
{
    health = inhealth;
}

void Object::setStamina(int instamina)
{
    stamina = instamina;
}

void Object::setAttack(int inattack)
{
    attack = inattack;
}


string Object::getShortDescription()
{
	return description;
}

string Object::getLongDescription()
{
	return " item(s), " + description + ".\n";
}

string Object::getOtherInfo()
{
    std::string health_str = std::to_string(health);
    std::string stamina_str = std::to_string(stamina);
    std::string attack_str = std::to_string(attack);
    if(stamina == 0)//BOSS
        return "    Health: " + health_str + "\n" + "    Attack: " + attack_str;
    else//Character
        return "    Health: " + health_str + "\n" + "    Stamina: " + stamina_str + "\n" + "    Attack: " + attack_str;
}

Object operator + (const Object &A, const Object &B)
{
    Object *item = new Object(A.description, A.health, A.stamina, A.attack);
    item->health += B.health;
    item->stamina += B.stamina;
    item->attack += B.attack;
    return *item;
}
