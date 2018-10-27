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
GameObject* GameObjectFactory::create(GameObjectID gameObjectID)
{
	GameObject* result = nullptr;

	switch (gameObjectID)
	{
	case StillClass:
		result = new StillObject();
		break;
	case AllyClass:
		result = new AllyObject();
		break;
	case EnamyClass:
		result = new EnamyObject();
		break;
	default:
		std::exception("!! no create gameobject.");
		break;
	}

	return result;
}
