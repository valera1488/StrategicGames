#pragma once
#include "LandscapeObject.h"
#include <iostream>
using namespace std;


class Water : public LandscapeObject {

private:
	int sizeX;
	int sizeY;
	int sizeZ;
	Coordinate* leftBotCorner;

public:
	Water(string texture, int colour, Coordinate leftBot, int x = 10, int y = 10, int z = 0);
	bool isIn(Coordinate point);
};