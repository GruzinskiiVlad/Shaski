#pragma once

#include<utility> //��� pair

using pos = std::pair<size_t, size_t>; //��� ���������� �����. ���������� � ����

class Cell //Cell - ����� ������. �������� ������� � ������ �� ���.
{
public:
	enum class State { BLACK, WHITE, BLANK }; //enum - ��� ������������ ����� ���������. ����� ����� �� ������
	Cell(State state);
	~Cell();
	State GetState() const { return mState; }; 
	void SetState(State state) { mState = state; } 
	
private:
	State mState;
};

