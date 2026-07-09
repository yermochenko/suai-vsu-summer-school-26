#include "pch.h"
#include "CppUnitTest.h"

#include "../main-project/pow.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unittests
{
	TEST_CLASS(unittests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(1.44, mypow(1.2, 2), 0.0001);
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(1, mypow(1, 15), 0.0001);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(16, mypow(-2, 4), 0.0001);
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(-32, mypow(-2, 5), 0.0001);
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(0, mypow(0, 11), 0.0001);
		}
		TEST_METHOD(TestMethod6)
		{
			Assert::AreEqual(1, mypow(23.45, 0), 0.0001);
		}
		TEST_METHOD(TestMethod7)
		{
			Assert::AreEqual(1, mypow(0, 0), 0.0001);
		}
	};
}
