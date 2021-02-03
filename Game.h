#pragma once
#include <map>
#include <string>
#include <iostream>
#include <string>
#include "Object.h"
using namespace std;

class IMap;
class IPlayer;
class IUnit;
class LandscapeObject;

class Game : Object {
private:
	map<string, IPlayer*> players;
	IMap* gameMap;

public:
	Game(IMap* gameMap);
	~Game();
	void addPlayer(string name, IPlayer* player);
	IPlayer* getPlayer(string name);
	void erasePlayer(string name);
	void damageUnit(IUnit* target, int damage);
	void healUnit(IUnit* target, int heal);
	void addMapObject(LandscapeObject* object);
	void eraseMapObject(LandscapeObject* object);
	void increaseResource(string player, double amount);
	void dereaseResource(string player, double amount);
	map<string, int>* getAllResourcesAmount();
};

