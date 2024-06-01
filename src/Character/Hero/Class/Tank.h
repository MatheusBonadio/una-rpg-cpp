#ifndef TANK_H
#define TANK_H

#include "../Hero.h"

class Tank : public Hero
{
private:
    
public:
//IMPORTANT: DECIDE ALL THE BASE STATS FOR EACH CLASS
    Tank(const string& name, int health = 0, int strength = 0, int, int intelligence = 0, int defence = 0, int dexterity = 0)
    : Hero(name, health, strength, intelligence, defence, dexterity) {}

    void applyBonus() override;
};

#endif