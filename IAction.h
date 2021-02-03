#pragma once
#include "Object.h"


class IAction : Object {
public:
	virtual void doAction() = 0;
	virtual void stopAction() = 0;
};
