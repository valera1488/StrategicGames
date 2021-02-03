#pragma once
#include <iostream>
#include "IResource.h"
using namespace std;

class Food : IResource {
public:
	Food(double newAmount);
	virtual double get();
	virtual void set(double newAmount);
	virtual string getName();

};

