#pragma once
#include "Object.h"
#include <string>
using namespace std;

class IPlayer;
class Coordinate;
class LandscapeObjectType;

class LandscapeObject {
protected:
	LandscapeObjectType* sprite;
	Coordinate* positionLeftBottom;
	int sizeX;
	int sizeY;
	int sizeZ;

public:
	LandscapeObject(string texture, int colour, Coordinate point, int sizeX, int sizeY, int sizeZ);
	bool isIn(Coordinate point);
};
