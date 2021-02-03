#pragma once
#include <iostream>
#include "LandscapeObject.h"
using namespace std;

class Ground : public LandscapeObject {

private:
	int sizeX;
	int sizeY;
	int sizeZ;
	Coordinate* leftBotCorner;

public:
	Ground(string texture, int colour, Coordinate leftBot, int x = 10, int y = 10, int z = 0);
	bool isIn(Coordinate point);

};

