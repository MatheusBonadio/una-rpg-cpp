#include "Tank.h"
#include <iostream>

void Tank::applyBonus()
{
    int newDefence = getDefence() + 10;
    int newHealth = getHealth() + 10;
    int newStrength = getStrength() + 5;
    int newDexterity = getDexterity() + 0;
    setDefence(newDefence);
    setHealth(newHealth);
    setStrength(newStrength);
    setDexterity(newDexterity);
}
