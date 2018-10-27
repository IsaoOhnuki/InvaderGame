#include "../gameObject.h"

#pragma once
class StillObject : public GameObject
{
public:
	StillObject(int posX, int posY);
	virtual ~StillObject();
};
