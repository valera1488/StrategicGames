#pragma once
#include <string>
#include "Object.h"
using namespace std;


class IResource : Object {

protected:
	double amount;

public:
	virtual string getName() = 0;
	virtual double get() = 0;
	virtual void set(double newAmount) = 0;
};
