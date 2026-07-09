#pragma once

#include "point.h"

class Segment
{
	Point a;
	Point b;
public:
	Segment(Point a, Point b);
	Point getA() const;
	Point getB() const;
	Point calcMiddlePoint() const;
};
