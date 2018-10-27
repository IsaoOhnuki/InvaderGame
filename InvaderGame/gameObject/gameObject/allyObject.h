#include "../gameObject.h"

#pragma once
class AllyObject : public GameObject
{
public:
	AllyObject(int posX, int posY);
	virtual ~AllyObject();
};
