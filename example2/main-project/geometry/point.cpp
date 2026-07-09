#include "point.h"

Point::Point(double _x, double _y) :
	x(_x),
	y(_y) {}

double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}
