#ifndef BASE_CHARACTER_H
#define BASE_CHARACTER_H

#include <iostream>
#include <string>
#include<algorithm>

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
        BaseCharacter(const string& name, int health=0, int power=0, int defence=0)  
        : characterName(name), health(std::min(health, 100)), power(std::min(power, 100)), defence(std::min(defence, 100)) {}

        // getters
        string getName() const { return characterName; }
        int getHealth() const { return health; }
        int getPower() const { return power; }
        int getDefence() const { return defence; }
        
        //setters
        void setHealth(int newHealth) { health = std::min(newHealth, 100); }
        void setPower(int newPower) { power = std::min(newPower, 100); }
        void setDefence(int newDefence) { defence = std::min(newDefence, 100); }

        //virtual functions
        virtual void displayStatus();
        virtual void applyBonus() = 0;
        virtual ~BaseCharacter() = default; 
        
        //function to calculate the damage
        void damageTaken(int damage);


};

#endif
