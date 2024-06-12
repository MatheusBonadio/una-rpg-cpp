#include <iostream>
#include <windows.h>
#include "Menu.h"

#pragma execution_character_set( "utf-8" )
#define _WIN32_WINNT 0x0500

using namespace std;

void Menu::displayMenu() {
	SetConsoleOutputCP(65001);

	cout << "===== RPG Game Menu =====" << endl;
	cout << "1. Start New Game" << endl;
	cout << "2. Credits" << endl;
	cout << "3. Exit" << endl;
	cout << "Please select an option (1-3): ";

	//HWND console = GetConsoleWindow();
	//RECT r;
	//GetWindowRect(console, &r); //stores the console's current dimension

	//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	////SetConsoleTextAttribute(hConsole, 10);

	//cout << "___  ___         _ _                 _     ____________ _____" << endl;
	//cout << "|  \\/  |        | (_)               | |    | ___ \\ ___ \\  __ \\" << endl;
	//cout << "| .  . | ___  __| |_  _____   ____ _| |    | |_/ / |_/ / |  \\/" << endl;
	//cout << "| |\\/| |/ _ \\/ _` | |/ _ \\ \\ / / _` | |    |    /|  __/| | __ " << endl;
	//cout << "| |  | |  __/ (_| | |  __/\\ V / (_| | |    | |\\ \\| |   | |_\\ \\" << endl;
	//cout << "\\_|  |_/\\___|\\__,_|_|\\___| \\_/ \\__,_|_|    \\_| \\_\\_|    \\____/" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	//cout << " _____________________________________________________________________________________________" << endl;
	//cout << "|          . . .      |" << endl;
	//cout << "|      .-' : :':'-.   |  asfasfasfsafsa sa fsa fasf asfsafsafasfsa" << endl;
	//cout << "|    .'   __/  \\__ :  |  asfasfasfasfasf asf sa fsa fas" << endl;
	//cout << "|   /   /          :  |  asfsafsa fas fsa fsa fsa f " << endl;
	//cout << "|  (  C     O   O  :  | " << endl;
	//cout << "|   \\  |       >   :  |" << endl;
	//cout << "|    \\ |    ___    :  |" << endl;
	//cout << "|      ::  ´      .   |" << endl;
	//cout << "|     /  \\_______/    |  [CONTINUAR]" << endl;
	//cout << "|_____________________|_______________________________________________________________________" << endl;
}