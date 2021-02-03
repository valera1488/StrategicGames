#pragma once

class Coordinate {

public:
	double x;
	double y;
	double z;

	Coordinate();
	Coordinate(double x, double y, double z = 0);
	void set(double x, double y, double z);
};

