#include "stdafx.h"
#include "enamyObject.h"

//---------------------------------------------------------
EnamyObject::EnamyObject(int posX, int posY)
	: GameObject(posX, posY)
{
}

//---------------------------------------------------------
EnamyObject::~EnamyObject()
{
}

//---------------------------------------------------------
bool EnamyObject::move(ULONG64 passageTimeMsec, int szX, int szY)
{
	return true;
}
