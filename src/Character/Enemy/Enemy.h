#ifndef ENEMY_H
#define ENEMY_H

#include "../BaseCharacter.h"

class Enemy : public BaseCharacter
{
private:
   int goldDrop;
   int expDrop;
public:
     Enemy(const string& name, int health, int power, int defence, int goldDrop, int expDrop)
    : BaseCharacter(name, health, power, defence), goldDrop(goldDrop), expDrop(expDrop) {}


    int getGoldDrop() const {return goldDrop;}
    int getExpDrop() const {return expDrop;}

    void displayStatus () override;
};








#endif