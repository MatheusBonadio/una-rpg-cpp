#include "Interface/Menu.h"
#include "Interface/Game.h"

#include <iostream>

using namespace std;

int main()
{
	Menu menu;
	Game game;

	int choice;

	while (true) {
		menu.displayMenu();
		cin >> choice;

		switch (choice) {
		case 1:
			game.startNewGame();
			break;
		case 2:
			game.showCredits();
			break;
		case 3:
			game.exitGame();
			return 0;
		default:
			cout << "\n\nInvalid option. Please try again." << endl;
		}
	}

	return 0;
}
