#pragma once
#include "Hero/Hero.h"
#include "Enemy/Enemy.h"

class Combat {
public:
    static void combatTurn(Hero& player, Enemy& enemy);
};