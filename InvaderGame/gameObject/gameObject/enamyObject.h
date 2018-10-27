#include "../gameObject.h"

#pragma once
class EnamyObject : public GameObject
{
public:
	EnamyObject(int posX, int posY);
	virtual ~EnamyObject();
	virtual bool move(ULONG64 progressTimeMsec, int szX, int szY);
};
