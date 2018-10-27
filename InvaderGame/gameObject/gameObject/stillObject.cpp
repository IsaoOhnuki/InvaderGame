#include "stdafx.h"
#include "stillObject.h"

//---------------------------------------------------------
StillObject::StillObject(int posX, int posY)
	: GameObject(posX, posY)
{
}

//---------------------------------------------------------
StillObject::~StillObject()
{
}

//---------------------------------------------------------
bool StillObject::move(ULONG64 passageTimeMsec, int szX, int szY)
{
	return true;
}
