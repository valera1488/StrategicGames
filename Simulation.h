#pragma once
#include "IPlayer.h"
#include <string>
using namespace std;

class IUnit;
class Behaviour;

class Simulation : IPlayer {
private:
	Behaviour* behaviour;

public:
	Simulation();
	virtual void addUnit(IUnit* unit);
	virtual void eraseUnit(IUnit* unit);
	virtual void increaseResource(string name, double amount);
	virtual void decreaseResource(string name, double amount);
};
