#include "../gameObject.h"

#pragma once
class AllyObject : public GameObject
{
public:
	AllyObject(int posX, int posY);
	virtual ~AllyObject();
	virtual bool move(ULONG64 passageTimeMsec, int szX, int szY);
};
