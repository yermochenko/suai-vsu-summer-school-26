#include "triangle.h"

Triangle::Triangle(Point _vertextA, Point _vertextB, Point _vertextC) :
	vertexA(_vertextA),
	vertexB(_vertextB),
	vertexC(_vertextC) {}

Point Triangle::getVertexA() const
{
	return vertexA;
}

Point Triangle::getVertexB() const
{
	return vertexB;
}

Point Triangle::getVertexC() const
{
	return vertexC;
}

Point Triangle::calcMedianIntersectionPoint()
{
	// TODO: implement
	return {};
}
