#pragma once
#include "IUnit.h"
#include <map>
using namespace std;

class IAction;
class Coordinate;

class Warrior : public IUnit {

private:
	double health;
	Coordinate* position;

public:
	Warrior(Coordinate position);
	bool isDead();
	void addAbility(string nameOfAbility, IAction* ability);
	void eraseAbility(string nameOfAbility);
	void preformAction(string nameOfAction);
	void goTo(Coordinate position);
	void attack(IUnit* enemy);
};

