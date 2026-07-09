#include <iostream>

#include "geometry/point.h"
#include "geometry/triangle.h"

std::ostream& operator<<(std::ostream& sout, const Point& point)
{
	return sout << '(' << point.getX() << "; " << point.getY() << ')';
}

int main()
{
	std::cout << "Hello" << std::endl;
	Point a(1, 8), b(4, 2), c(-2, -4);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	Triangle t(a, b, c);
	std::cout << t.calcTriangleHeightsIntersectionPoint() << std::endl;
	return 0;
}
