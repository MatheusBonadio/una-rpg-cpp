#ifndef BASE_CHARACTER_H
#define BASE_CHARACTER_H

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class BaseCharacter
{
private:
    const string characterName;
    int health;
    int strength;
    int defence;
	int dexterity;

public:
    // Constructor with initialization list
    BaseCharacter(const string &name, int health = 0, int strength = 0, int defence = 0, int dexterity = 0)
        : characterName(name), health(min(health, 100)), strength(min(strength, 100)), defence(min(defence, 100)), dexterity(min(dexterity, 100)) {}

    string getName() const { return characterName; }
    int getHealth() const { return health; }
    int getStrength() const { return strength; }
    int getDefence() const { return defence; }
    int getDexterity() const { return dexterity; }

    void setHealth(int newHealth) { health = min(newHealth, 100); }
    void setStrength(int newStrength) { strength = min(newStrength, 100); }
    void setDefence(int newDefence) { defence = min(newDefence, 100); }
    void setDexterity(int newDexterity) { defence = min(newDexterity, 100); }

    virtual void displayStatus();
    virtual void applyBonus() = 0;
    virtual ~BaseCharacter() = default;

    // function to calculate the damage
    void damageTaken(int damage);
};

#endif
