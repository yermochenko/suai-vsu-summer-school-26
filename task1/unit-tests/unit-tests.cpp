#include "pch.h"
#include "CppUnitTest.h"

#include "../main-project/geometry/triangle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unittests
{
	TEST_CLASS(unittests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle t(Point(), Point(12), Point(6, 8));
			Point p = t.calcTriangleHeightsIntersectionPoint();
			Assert::AreEqual(6.0, p.getX(), 1e-5);
			Assert::AreEqual(4.5, p.getY(), 1e-5);
		}
		TEST_METHOD(TestMethod2)
		{
			Triangle t(Point(-1, -1), Point(3, 5), Point(2, -3));
			Point p = t.calcTriangleHeightsIntersectionPoint();
			Assert::AreEqual(-1, p.getX(), 1e-5);
			Assert::AreEqual(-1, p.getY(), 1e-5);
		}
		TEST_METHOD(TestMethod3)
		{
			Triangle t(Point(), Point(6), Point(4, 4));
			Point p = t.calcTriangleHeightsIntersectionPoint();
			Assert::AreEqual(4, p.getX(), 1e-5);
			Assert::AreEqual(2, p.getY(), 1e-5);
		}
		TEST_METHOD(TestMethod4)
		{
			Triangle t(Point(4), Point(0, 8), Point(9, 5));
			Point p = t.calcTriangleHeightsIntersectionPoint();
			Assert::AreEqual(5, p.getX(), 1e-5);
			Assert::AreEqual(3, p.getY(), 1e-5);
		}
		TEST_METHOD(TestMethod5)
		{
			Triangle t(Point(1, 8), Point(4, 2), Point(-2, -4));
			Point p = t.calcTriangleHeightsIntersectionPoint();
			Assert::AreEqual(8, p.getX(), 1e-5);
			Assert::AreEqual(1, p.getY(), 1e-5);
		}
	};
}
