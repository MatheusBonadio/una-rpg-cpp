#include "../Class/Warrior.h"
#include <iostream>

void Warrior::applyBonus()
{
    int newDefence = getDefence() + 3;
    int newHealth = getHealth() + 7;
    int newStrength = getStrength() + 10;
    int newIntelligence = getIntelligence() + 0;
    int newDexterity = getDexterity() + 0;
    setDefence(newDefence);
    setHealth(newHealth);
    setStrength(newStrength);
    setIntelligence(newIntelligence);
    setDexterity(newDexterity);
}
