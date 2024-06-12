
#ifndef COMBAT_H
#define COMBAT_H

#include "../una-rpg-cpp/src/Character/BaseCharacter.h"

class Combat {
public:
    static void combatTurn(BaseCharacter& player, BaseCharacter& enemy);
};

#endif
