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

public:
    // Constructor with initialization list
    BaseCharacter(const string &name, int applyHealth = 100, int health = 0, int strength = 0, int defence = 0)
    : characterName(name), health(min(health, 100)), strength(min(strength, 100)), defence(min(defence, 100)){}

    string getName() const { return characterName; }
    int getHealth() const { return health; }
    int getStrength() const { return strength; }
    int getDefence() const { return defence; }
    
    void setHealth(int newHealth) { health = min(newHealth, 100); }
    void setStrength(int newStrength) { strength = min(newStrength, 100); }
    void setDefence(int newDefence) { defence = min(newDefence, 100); }
   

    virtual void displayStatus();
    virtual void applyBonus() = 0;
    virtual ~BaseCharacter() = default;

   
    // function to calculate the damage
    void damageTaken(int damage);
    int damageTaken(int damage) const { return defence; }

    // check if the character is alive or not
    bool isAlive() const { return health > 0; }

    ////attack function
    virtual void attack(BaseCharacter& target) {
        int damage = strength - target.getDefence();
        if (damage < 1) damage = 1;
        cout << damage;
        int vida = target.getHealth();
        target.damageTaken(damage);
        cout << endl <<characterName << " attacked " << target.getName() << " causing " << damage << " damage." << endl;       
    }

    void takeDamage(int damage) {
        health -= damage;
        if (health < 0) health = 0;
    }

};

#endif
