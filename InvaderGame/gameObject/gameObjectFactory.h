#pragma once

class GameObject;

enum GameObjectID
{
	StillClass,
	AllyClass,
	EnamyClass,
};

class GameObjectFactory
{
public:
	GameObjectFactory();
	virtual ~GameObjectFactory();
	static GameObject* create(GameObjectID gameObjectID);
};
