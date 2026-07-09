#pragma once

#include "point.h"

class Triangle
{
	const Point vertexA;
	const Point vertexB;
	const Point vertexC;
public:
	Triangle(Point vertexA, Point vertexB, Point vertexC);
	Point getVertexA() const;
	Point getVertexB() const;
	Point getVertexC() const;
	Point calcTriangleHeightsIntersectionPoint() const;
};
