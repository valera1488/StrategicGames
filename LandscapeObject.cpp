#include "LandscapeObject.h"
#include "LandscapeObjectType.h"
#include "Coordinate.h"
#include "LandscapeObjectsFactory.h"



LandscapeObject::LandscapeObject(string texture, int colour, Coordinate point, int sizeX, int sizeY, int sizeZ) {
	this->sizeX = sizeX;
	this->sizeY = sizeY;
	this->sizeZ = sizeZ;
	positionLeftBottom = &point;
	sprite = LandscapeObjectsFactory::getObject(texture, colour);
}

bool LandscapeObject::isIn(Coordinate point) {
	return point.x >= positionLeftBottom->x && point.x < positionLeftBottom->x &&
		point.y >= positionLeftBottom->y && point.y < positionLeftBottom->y;
}