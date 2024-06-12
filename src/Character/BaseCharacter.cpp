#include "BaseCharacter.h"
#include <algorithm> 

using namespace std;

void BaseCharacter::displayStatus() {
    cout << "\nName: " << characterName << "\nHealth: " << health << "\nStrength: " << strength << "\nDefence: " << defence <<endl;
}

void BaseCharacter::damageTaken(int damage) {
    //int damageTakenAmount = max(damage, 1);
    health = health - damage; 
    if (health < 0) health = 0;
}


