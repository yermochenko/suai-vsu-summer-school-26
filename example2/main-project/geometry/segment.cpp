#include "segment.h"

Segment::Segment(Point _a, Point _b) :
	a(_a),
	b(_b) {}

Point Segment::getA() const
{
	return a;
}

Point Segment::getB() const
{
	return b;
}

Point Segment::calcMiddlePoint() const
{
	return Point((a.getX() + b.getX()) / 2, (a.getY() + b.getY()) / 2);
}
