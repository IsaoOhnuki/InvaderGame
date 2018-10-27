#include "../gameObject.h"

#pragma once
class StillObject : public GameObject
{
public:
	StillObject(int posX, int posY);
	virtual ~StillObject();
	virtual bool move(ULONG64 passageTimeMsec, int szX, int szY);
};
