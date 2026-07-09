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
			Triangle t = { {1, 1}, {9, 1}, {5, 7} };
			Point p = t.calcMedianIntersectionPoint();
			Assert::AreEqual(5, p.getX(), 0.0001);
			Assert::AreEqual(3, p.getY(), 0.0001);
		}
	};
}
