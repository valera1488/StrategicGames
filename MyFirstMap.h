#pragma once
#include "IMap.h"
#include <iostream>

class LandscapeObject;

class MyFirstMap : IMap {

public:
	MyFirstMap();
	virtual void addObj(LandscapeObject* object);
};

