#include "Game.h"
#include <iostream>
#include <stdlib.h>


Game::Game()
{
}


Game::~Game()
{
}




void Game::Start()//� ���� ���������� ������ � ������� ������
{

	mboard.ResetMap();//
	while (true)
	{
		Board::MoveResult moveResult(Board::MoveResult::PROHIBITED);
		bool direction = true;


		auto newMove = MakeIO();

		moveResult = mboard.MakeMove(newMove.first, newMove.second, direction);
	}
}




movePos Game::MakeIO()//���������
{

	system("cls");
	auto map = mboard.GetMap();
	mIO.DrawBoard(map);


	auto newMove = mIO.GetMove();

	return std::move(newMove);
}
