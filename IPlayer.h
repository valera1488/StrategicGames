#pragma once
#include <map>
#include <string>
#include <vector>
#include "Object.h"
using namespace std;

class IUnit;
class IResource;
class Ground;
class Water;

class IPlayer : Object {

protected:
	vector<IUnit*> units;
	vector<IUnit*> selected;
	map<string, IResource*> resources;

public:
	virtual void addUnit(IUnit* unit) = 0;
	virtual void eraseUnit(IUnit* unit) = 0;
	virtual void increaseResource(string name, double amount) = 0;
	virtual void decreaseResource(string name, double amount) = 0;
	virtual map<string, int>* getResourcesAmount() = 0;
};

