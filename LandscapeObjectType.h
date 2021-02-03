#pragma once
#include <string>
#include "Object.h"
using namespace std;


class LandscapeObjectType : Object {
public:
	string path;
	int colour = 0x000000;
	
	LandscapeObjectType(string path, int colour);
	LandscapeObjectType();
};
