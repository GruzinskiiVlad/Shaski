#pragma once

#include <utility>
#include <map>
#include "Cell.h"

using movePos = std::pair<pos, pos>;//
using map = std::map<pos, Cell>;

class IO
{
public:
	IO();
	~IO();
	movePos GetMove();
	void DrawBoard(const map& board);

private:
	std::string CastState(Cell::State state);
};

