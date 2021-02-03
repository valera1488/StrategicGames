#pragma once
#include "Object.h"
#include <map>
#include <string>
#include <vector>
using namespace std;

class IAction;
class Coordinate;

class IUnit : Object {

protected:
	map<string, IAction*> abilities{};
	vector<IAction*> currentAction{};
	Coordinate* position;
	double health;

public:
	virtual bool isDead() = 0;
	virtual void addAbility(string nameOfAbility, IAction* ability) = 0;
	virtual void eraseAbility(string nameOfAbility) = 0;
	virtual void preformAction(string nameOfAction) = 0;
	virtual void goTo(Coordinate position) = 0;
	virtual void attack(IUnit* enemy) = 0;
};
