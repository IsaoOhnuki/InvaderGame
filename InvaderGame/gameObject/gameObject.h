#include "gameObject/objectParam/objectParam.h"

#pragma once
class GameObject
{
public:
	GameObject(int posX, int posY);
	virtual ~GameObject();
	virtual bool move(ULONG64 passageTimeMsec, int szX, int szY);
private:
	ObjectParam objectParam;
};
