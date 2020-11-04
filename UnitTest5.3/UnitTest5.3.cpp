#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.3/lab5_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:

		TEST_METHOD(TestMethod5_3)
		{
			double t;
			double x = 0;
			t = f(x);
			Assert::AreEqual(t, 1.);
		}
	};
}

