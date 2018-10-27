#include "position.h"

#pragma once
class ObjectParam
{
public:
	ObjectParam(int posX, int posY);
	virtual ~ObjectParam();

private:
	Position position;
};
