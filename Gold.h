#pragma once
#include <iostream>
#include "IResource.h"
using namespace std;


class Gold : IResource {
	Gold(double newAmount);
	virtual double get();
	virtual void set(double newAmount);
	virtual string getName();
};

