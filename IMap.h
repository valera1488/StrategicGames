#pragma once
#include "Object.h"
#include <vector>
using namespace std;

class LandscapeObject;

class IMap : Object {
protected:
	vector<LandscapeObject*> landscape;

public:
	virtual void addObj(LandscapeObject* object) = 0;
};
