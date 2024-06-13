#pragma once

#include "../Character/Hero/Hero.h"

class Game {
public:
	void startNewGame();
	void showCredits();
	void exitGame();

	void chooseClass();
	void chooseAction(Hero& hero);
};