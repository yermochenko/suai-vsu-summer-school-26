#pragma once

class Point
{
	const double x;
	const double y;
public:
	Point(double x = 0, double y = 0);
	double getX() const;
	double getY() const;
};
