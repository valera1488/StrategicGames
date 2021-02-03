#pragma once
#include <vector>
#include "LandscapeObjectType.h"
using namespace std;

class LandscapeObjectsFactory {
private:
	static vector<LandscapeObjectType*> objectTypes;

public:
	static LandscapeObjectType* getObject(string path, int colour);
};
