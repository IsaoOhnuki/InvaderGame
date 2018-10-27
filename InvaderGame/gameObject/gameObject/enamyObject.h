#include "../gameObject.h"

#pragma once
class EnamyObject : public GameObject
{
public:
	EnamyObject(int posX, int posY);
	virtual ~EnamyObject();
	virtual bool move(ULONG64 passageTimeMsec, int szX, int szY);
};
