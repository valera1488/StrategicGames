#pragma once
#include "IAction.h"
#include <iostream>
using namespace std;

class IUnit;
class Attack : public IAction {
private:
	double range;
	double cooldown;
	double damage;
	IUnit* target;

public:
	Attack(double range, double cooldown, double damage);
	virtual void doAction();
	virtual void stopAction();
};

