#pragma once
#include "IAction.h"
#include <iostream>
using namespace std;


class Move : public IAction {

private:
	double speedX;
	double speedY;
	double speedZ;

public:
	Move();
	virtual void doAction();
	virtual void stopAction();
};

