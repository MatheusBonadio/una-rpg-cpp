#ifndef WARRIOR_H
#define WARRIOR_H

#include "../Hero.h"

class Warrior : public Hero
{
private:
    
public:
//IMPORTANT: DECIDE ALL THE BASE STATS FOR EACH CLASS
    Warrior(const string& name, int health = 0, int strength = 0, int defence = 0, int dexterity = 0)
    : Hero(name, health, strength, defence, dexterity) {}

    void applyBonus() override;
};

#endif