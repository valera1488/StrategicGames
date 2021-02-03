#pragma once
#include "IPlayer.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

class IUnit;

class Player : public IPlayer {
public:
	Player();
	virtual void addUnit(IUnit* unit);
	virtual void eraseUnit(IUnit* unit);
	virtual void increaseResource(string name, double amount);
	virtual void decreaseResource(string name, double amount);
	virtual map<string, int>* getResourcesAmount();
	~Player();
};

