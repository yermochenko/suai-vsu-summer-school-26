#pragma once

#include <optional>

#include "point.h"

class Line
{
	const double coefficientA;
	const double coefficientB;
	const double coefficientC;
public:
	Line(Point a, Point b);
	Line(Line line, Point c);
	double getCoefficientA() const;
	double getCoefficientB() const;
	double getCoefficientC() const;
};

std::optional<Point> calcIntersectionPoint(const Line&, const Line&);
