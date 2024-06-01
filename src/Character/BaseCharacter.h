#ifndef BASE_CHARACTER_H
#define BASE_CHARACTER_H

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Defining the BaseCharacter class. It contains a character name, health, power, and defense.

class BaseCharacter
{
private:
    const string characterName;
    int health;
    int power;
    int defence;

public:
    // Constructor with initialization list
    BaseCharacter(const string &name, int health = 0, int strength = 0, int, int intelligence = 0, int defence = 0, int dexterity = 0)
        : characterName(name), health(std::min(health, 100)), strength(std::min(strength, 100)), defence(std::min(defence, 100), dexterity(std::min(dexterity, 100))) {}

    // getters
    string getName() const { return characterName; }
    int getHealth() const { return health; }
    int getstrength() const { return strength; }
    int getIntelligence() const { return intelligence; }
    int getDefence() const { return defence; }
    int getDexterity() const { return dexterity; }

    // setters
    void setHealth(int newHealth) { health = std::min(newHealth, 100); }
    void setPower(int newStrength) { power = std::min(newStrength, 100); }
    void setDefence(int newIntelligence) { defence = std::min(newIntelligence, 100); }
    void setDefence(int newDefence) { defence = std::min(newDefence, 100); }
    void setDefence(int newDexterity) { defence = std::min(newDexterity, 100); }

    // virtual functions
    virtual void displayStatus();
    virtual void applyBonus() = 0;
    virtual ~BaseCharacter() = default;

    // function to calculate the damage
    void damageTaken(int damage);
};

#endif
