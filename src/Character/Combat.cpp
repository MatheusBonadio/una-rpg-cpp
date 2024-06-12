#include "Combat.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Combat::combatTurn(BaseCharacter& player, BaseCharacter& enemy) {
    int round = 1;

    enemy.setHealth(10);

    cout << "Combat turn initiated between " << player.getName() << " and " << enemy.getName() << endl;

    while (player.isAlive() && enemy.isAlive()) {
        cout << "\n---- Round " << round << " ----" << endl;

        cout << "Press Enter to attack..." << endl;
        cin.get();

        cout << player.getName() << " attacks " << enemy.getName() << endl;
        player.attack(enemy);
        cout << "After attack, " << enemy.getName() << " is alive: " << enemy.isAlive() << endl;

        if (enemy.isAlive()) {
            cout << "Press Enter to attack..." << endl;
            cin.get();

            cout << enemy.getName() << " attacks " << player.getName() << endl;
            enemy.attack(player);
            cout << "After attack, " << player.getName() << " is alive: " << player.isAlive() << endl;
        }

        cout << "\n---- Status After Round of Attacks ----" << endl;
        player.displayStatus();
        enemy.displayStatus();

        round++;
    }

    cout << "\n===========================================\n";
    cout << "                  RESULT                     \n";
    cout << "=============================================\n";

    if (player.isAlive()) {
        cout << setw(20) << player.getName() << " won the fight!\n";
    }
    else if (enemy.isAlive()) {
        cout << setw(20) << enemy.getName() << " won the fight!\n";
    }
    else {
        cout << setw(20) << "Both characters died. A tie!\n";
    }

    cout << "=============================================\n";

}
