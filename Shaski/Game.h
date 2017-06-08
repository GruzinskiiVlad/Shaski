#pragma once
#include "Board.h"
#include "IO.h"

class Game
{
public:

	Game();
	~Game();
	void Start();
private:
	movePos MakeIO();

	Board mboard;
	IO mIO;

};

