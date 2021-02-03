#include "Coordinate.h"

void Coordinate::set(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Coordinate::Coordinate(double x, double y, double z) : x(x), y(y), z(z)
{

}

Coordinate::Coordinate()
{

}
