#pragma once

#include<utility> //дл€ pair

using pos = std::pair<size_t, size_t>; //дл€ укорочени€ здесь.  оординаты в паре

class Cell //Cell - класс €чейки. ¬ключает позицию и фигуру на ней.
{
public:
	enum class State { BLACK, WHITE, BLANK }; //enum - дл€ определенных типов состо€ний.  ласс цвета на €чейке
	Cell(State state);
	~Cell();
	State GetState() const { return mState; }; 
	void SetState(State state) { mState = state; } 
	
private:
	State mState;
};

