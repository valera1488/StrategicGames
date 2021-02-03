#include "Water.h"
#include "Coordinate.h"


Water::Water(string texture, int colour, Coordinate leftBot, int x, int y, int z) : LandscapeObject(texture, colour, leftBot, x, y, z) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
}

bool Water::isIn(Coordinate point) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	int x = leftBotCorner->x, y = leftBotCorner->y, z = leftBotCorner->z;
	return (point.x >= leftBotCorner->x &&
		point.x < x&&
		point.y >= leftBotCorner->y &&
		point.y < y&&
		point.z >= leftBotCorner->z &&
		point.z < z);
}