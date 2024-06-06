#include "../Class/Archer.h"
#include <iostream>

void Archer::applyBonus() {
    int newDefence = getDefence() + 5;
    int newHealth = getHealth() + 5;
    int newStrength = getStrength() + 3;
    int newDexterity = getDexterity() + 10;
    setDefence(newDefence);
    setHealth(newHealth);
    setStrength(newStrength);
    setDexterity(newDexterity);
}