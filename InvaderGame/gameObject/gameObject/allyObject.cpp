#include "stdafx.h"
#include "allyObject.h"

//---------------------------------------------------------
AllyObject::AllyObject(int posX, int posY)
	: GameObject(posX, posY)
{
}

//---------------------------------------------------------
AllyObject::~AllyObject()
{
}

//---------------------------------------------------------
bool AllyObject::move(ULONG64 passageTimeMsec, int szX, int szY)
{
	return true;
}
