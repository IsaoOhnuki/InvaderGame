#include "stdafx.h"
#include "gameObjectManger.h"
#include "gameObject/allyObject.h"
#include "gameObject/enamyObject.h"
#include "gameObject/stillObject.h"

//---------------------------------------------------------
GameObjectManger::GameObjectManger()
	: objects()
{
}

//---------------------------------------------------------
GameObjectManger::~GameObjectManger()
{
}

//---------------------------------------------------------
void GameObjectManger::addObject(GameObjectID gameObjectID, int posX, int posY)
{
	GameObject* object = GameObjectFactory::create(gameObjectID, posX, posY);

	if (nullptr != object) {
		objects.push_back(object);
	}
}

//---------------------------------------------------------
std::vector<GameObject*> GameObjectManger::getObjects(GameObjectType gameObjectType)
{
	std::vector<GameObject*> result;

	switch (gameObjectType)
	{
	case All:
		std::for_each(result.begin(), result.end(), [&result](GameObject* &i) {
			result.push_back(i);
		});
		break;
	case Still:
		std::for_each(result.begin(), result.end(), [&result](GameObject* &i) {
			GameObject* obj = dynamic_cast<StillObject*>(i);
			if (nullptr != obj) {
				result.push_back(obj);
			}
		});
		break;
	case Ally:
		std::for_each(result.begin(), result.end(), [&result](GameObject* &i) {
			GameObject* obj = dynamic_cast<AllyObject*>(i);
			if (nullptr != obj) {
				result.push_back(obj);
			}
		});
		break;
	case Enamy:
		std::for_each(result.begin(), result.end(), [&result](GameObject* &i) {
			GameObject* obj = dynamic_cast<EnamyObject*>(i);
			if (nullptr != obj) {
				result.push_back(obj);
			}
		});
		break;
	default:
		break;
	}

	return result;
}
