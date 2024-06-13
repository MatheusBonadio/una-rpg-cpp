#include "Combat.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Combat::combatTurn(Hero& player, Enemy& enemy) {
    int round = 1;

	player.displayStatus();
	enemy.displayStatus();

    cout << endl << "Combat turn initiated between " << player.getName() << " and " << enemy.getName() << endl;

    while (player.isAlive() && enemy.isAlive()) {
        cout << "\n---- Round " << round << " ----" << endl;

        cout << "Press Enter to attack..." << endl;
        cin.get();

        player.attack(enemy);
        cout << "After attack, " << enemy.getName() << " is alive with " << enemy.getHealth() << " points of life" << endl;

        if (enemy.isAlive()) {
			cout << endl;
            /*cout << "Press Enter to attack..." << endl;
            cin.get();*/

            enemy.attack(player);
            cout << "After attack, " << player.getName() << " is alive with " << player.getHealth() << " points of life" << endl;
        }

        cout << "\n---- Status After Round of Attacks ----" << endl;
        player.displayStatus();
        enemy.displayStatus();

        round++;
    }

	cout << "\n---- Result ----" << endl;

    if (player.isAlive()) {
        cout << player.getName() << " won the fight!\n";
		enemy.died(player);
		enemy.displayStatus();
    }
    else if (enemy.isAlive()) {
        cout << enemy.getName() << " won the fight!\n";
    }
    else {
        cout << "Both characters died. A tie!\n";
    }

    cout << "=============================================\n";

}
