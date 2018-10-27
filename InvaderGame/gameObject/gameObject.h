#include "gameObject/objectParam/objectParam.h"

#pragma once
class GameObject
{
public:
	GameObject(int posX, int posY);
	virtual ~GameObject();
private:
	ObjectParam objectParam;
};
