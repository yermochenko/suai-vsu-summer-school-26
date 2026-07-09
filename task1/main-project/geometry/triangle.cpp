#include "triangle.h"
#include "line.h"

Triangle::Triangle(Point _vertexA, Point _vertexB, Point _vertexC) :
	vertexA(_vertexA),
	vertexB(_vertexB),
	vertexC(_vertexC) {}

Point Triangle::getVertexA() const
{
	return this->vertexA;
}

Point Triangle::getVertexB() const
{
	return this->vertexB;
}

Point Triangle::getVertexC() const
{
	return this->vertexC;
}

Point Triangle::calcTriangleHeightsIntersectionPoint() const
{
	// TODO: implement calculation
	return Point();
}
