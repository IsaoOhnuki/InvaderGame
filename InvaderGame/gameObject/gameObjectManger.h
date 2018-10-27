#pragma once

#include <vector>
#include "gameObjectFactory.h"

enum GameObjectType
{
	All,
	Still,
	Ally,
	Enamy
};

class GameObjectManger
{
public:
	GameObjectManger();
	virtual ~GameObjectManger();

	void addObject(GameObjectID gameObjectID, int posX, int posY);
	std::vector<GameObject*> getObjects(GameObjectType gameObjectType);

private:
	std::vector<GameObject*> objects;
};
