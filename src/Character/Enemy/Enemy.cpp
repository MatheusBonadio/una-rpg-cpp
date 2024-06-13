#include "Enemy.h"
#include <iostream>
#include "../Hero/Hero.h"

using namespace std;

void Enemy::displayStatus() {
    BaseCharacter::displayStatus();
    cout << "Class: Enemy" << "\nGold Drop: " << goldDrop << "\nExp Drop: " << expDrop << endl;
}

void Enemy::applyBonus() {
	int newDefence = getDefence() + 5;
	int newHealth = getHealth() + 5;
	int newStrength = getStrength() + 3;

	setDefence(newDefence);
	setHealth(newHealth);
	setStrength(newStrength);
}

void Enemy::died(Hero& hero) {
	hero.addGold(this->getGoldDrop());
	hero.addExperience(this->getExpDrop());
}