#include "Ground.h"
#include "IPlayer.h"
#include "Coordinate.h"


Ground::Ground(string texture, int colour, Coordinate leftBot, int x, int y, int z) : LandscapeObject(texture, colour, leftBot, x, y, z) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
}

bool Ground::isIn(Coordinate point) {
	cout << typeid(*this).name() << "_" << this << ": " << __FUNCTION__ << endl << endl;
	int x = leftBotCorner->x, y = leftBotCorner->y, z = leftBotCorner->z;
	return (point.x >= leftBotCorner->x &&
		point.x < x&&
		point.y >= leftBotCorner->y &&
		point.y < y&&
		point.z >= leftBotCorner->z &&
		point.z < z);
}