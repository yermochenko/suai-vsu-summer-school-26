#include "line.h"

#include <cmath>

#define COMPARISON_TOLERANCE 1E-5

Line::Line(Point a, Point b) :
	coefficientA(a.getY() - b.getY()),
	coefficientB(b.getX() - a.getX()),
	coefficientC(a.getX() * b.getY() - b.getX() * a.getY()) {}

Line::Line(Line line, Point point) :
	coefficientA(line.getCoefficientB()),
	coefficientB(-line.getCoefficientA()),
	coefficientC(line.getCoefficientA() * point.getY() - line.getCoefficientB() * point.getX()) {}

double Line::getCoefficientA() const
{
	return coefficientA;
}

double Line::getCoefficientB() const
{
	return coefficientB;
}

double Line::getCoefficientC() const
{
	return coefficientC;
}

std::optional<Point> calcIntersectionPoint(const Line& line1, const Line& line2)
{
	double z = line1.getCoefficientA() * line2.getCoefficientB() - line1.getCoefficientB() * line2.getCoefficientA();
	if (fabs(z) > COMPARISON_TOLERANCE)
	{
		return Point(
			(line1.getCoefficientB() * line2.getCoefficientC() - line1.getCoefficientC() * line2.getCoefficientB()) / z,
			(line1.getCoefficientC() * line2.getCoefficientA() - line1.getCoefficientA() * line2.getCoefficientC()) / z
		);
	}
	else
	{
		return std::nullopt;
	}
}
