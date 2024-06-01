#include "Enemy.h"
#include <iostream>

using namespace std;

void Enemy::displayStatus() {
    BaseCharacter::displayStatus();
    cout << "Class: Enemy" << "\nGold Drop: " << goldDrop << "\nExp Drop: " << expDrop << endl;
}
