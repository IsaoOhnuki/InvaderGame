#include "stdafx.h"
#include "gameObjectFactory.h"
#include "gameObject/stillObject.h"
#include "gameObject/allyObject.h"
#include "gameObject/enamyObject.h"

//---------------------------------------------------------
GameObjectFactory::GameObjectFactory()
{
}

//---------------------------------------------------------
GameObjectFactory::~GameObjectFactory()
{
}

//---------------------------------------------------------
GameObject* GameObjectFactory::create(GameObjectID gameObjectID, int posX, int posY)
{
	GameObject* result = nullptr;

	switch (gameObjectID)
	{
	case StillClass:
		result = new StillObject(posX, posY);
		break;
	case AllyClass:
		result = new AllyObject(posX, posY);
		break;
	case EnamyClass:
		result = new EnamyObject(posX, posY);
		break;
	default:
		std::exception("!! no create gameobject.");
		break;
	}

	return result;
}
