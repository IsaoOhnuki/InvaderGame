#include "stdafx.h"
#include "gameObject.h"

//---------------------------------------------------------
GameObject::GameObject(int posX, int posY)
	: objectParam(posX, posY)
{
}

//---------------------------------------------------------
GameObject::~GameObject()
{
}

//---------------------------------------------------------
bool GameObject::move(ULONG64 progressTimeMsec, int szX, int szY)
{
	return true;
}
