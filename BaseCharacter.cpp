#include "BaseCharacter.h"
#include <algorithm> 

using namespace std;

void BaseCharacter::displayStatus() {
    cout << "Name: " << characterName << "\nHealth: " << health << "\nPower: " << power << "\nDefence: " << defence << endl;
}

void BaseCharacter::damageTaken(int damage) {
    int damageTakenAmount = max(damage - defence, 0);
    health = health - damageTakenAmount; 
    if (health < 0) health = 0;
}
