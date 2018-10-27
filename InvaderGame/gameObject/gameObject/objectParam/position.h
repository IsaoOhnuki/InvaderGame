#pragma once
class Position
{
public:
	Position(int posX, int posY);
	virtual ~Position();

private:
	ULONG64 timeMsec;
	int posX;
	int posY;
};
