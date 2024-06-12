#include <iostream>
#include <windows.h>
#include "Menu.h"

#pragma execution_character_set( "utf-8" )

using namespace std;

void Menu::displayMenu() {
	SetConsoleOutputCP(65001);

	cout << endl << endl << endl;
	cout << "                        ___  ___         _ _                 _     ____________ _____" << endl;
	cout << "                        |  \\/  |        | (_)               | |    | ___ \\ ___ \\  __ \\" << endl;
	cout << "                        | .  . | ___  __| |_  _____   ____ _| |    | |_/ / |_/ / |  \\/" << endl;
	cout << "                        | |\\/| |/ _ \\/ _` | |/ _ \\ \\ / / _` | |    |    /|  __/| | __ " << endl;
	cout << "                        | |  | |  __/ (_| | |  __/\\ V / (_| | |    | |\\ \\| |   | |_\\ \\" << endl;
	cout << "                        \\_|  |_/\\___|\\__,_|_|\\___| \\_/ \\__,_|_|    \\_| \\_\\_|    \\____/" << endl;
	cout << endl << endl << endl << endl << endl << endl << endl << endl;

	cout << "1 - Start New Game" << endl;
	cout << "2 - Credits" << endl;
	cout << "3 - Exit" << endl << endl;
	cout << "Please select an option (1-3): ";
}