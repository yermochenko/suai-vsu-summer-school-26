#pragma once

#include "point.h"

class Triangle
{
	const Point vertexA;
	const Point vertexB;
	const Point vertexC;
public:
	Triangle(Point vertextA, Point vertextB, Point vertextC);
	Point getVertexA() const;
	Point getVertexB() const;
	Point getVertexC() const;
	Point calcMedianIntersectionPoint();
};
