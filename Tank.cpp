#include "Tank.h"
#include <iostream>

void Tank::applyBonus() {
    int newDefence = getDefence() + 10;
    int newHealth = getHealth() + 10;
    int newPower = getPower() + 5;
    setDefence(newDefence);
    setHealth(newHealth);
    setPower(newPower);
}
