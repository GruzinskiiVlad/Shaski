#include "IO.h"

#include <iostream>
#include <string>


IO::IO()
{
}


IO::~IO()
{
}


movePos IO::GetMove()//��������������� ����� ����
{
	movePos position;
	size_t p1, p2;



	std::cin >> p1;
	std::cin >> p2;


		position.first.first = p1 / 10;
		position.first.second = p1 - 10 * position.first.first;

		position.second.first = p2 / 10;
		position.second.second = p2 - 10 * position.second.first;
	

	return position;
}


void IO::DrawBoard(const map& board)
{
	size_t boardSize = static_cast<size_t>(sqrt(board.size()));

	for (size_t i = 0; i < boardSize; i++)
	{
		std::cout << "|";

		for (size_t j = 0; j < boardSize; j++)
		{
			std::string cellValue = CastState(board.at(pos(i, j)).GetState());
			std::cout << cellValue;
			std::cout << "|";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
}


std::string IO::CastState(Cell::State state)
{
	std::string result;

	switch (state)
	{
	case Cell::State::BLACK:
		result = "B";
		break;
	case Cell::State::WHITE:
		result = "W";
		break;
	default:
		result = " ";
		break;
	}

	return std::move(result);
}
