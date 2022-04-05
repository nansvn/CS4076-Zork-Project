#include "Object.h"

Object::Object(string inDescription) {
    description = inDescription;
}

Object::Object(string indescription, int inhealth, int inattack)
    : description("Unknown object"),health(0),attack(0) //Initializer
{
    description = indescription;
    setHealth(inhealth);
    setAttack(inattack);
}

Object::Object(string indescription, int inhealth, int instamina, int inattack)
    : description("Unknown object"),health(0),stamina(0),attack(0) //Initializer
{
    description = indescription;
    setHealth(inhealth);
    setStamina(instamina);
    setAttack(inattack);
}

int Object::getHealth() const
{
    return health;
}
int Object::getStamina() const
{
    return stamina;
}

int Object::getAttack() const
{
    return attack;
}

//Template
template<typename T>
void Object::setHealth(const T& inhealth){
        this->health = inhealth;
}

template<typename T>
void Object::setStamina(const T& instamina){
        this->stamina = instamina;
}

template<typename T>
void Object::setAttack(const T& inattack){
        this->attack = inattack;
}


string Object::getShortDescription()
{
	return description;
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
