#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.0/Lab_05.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double result = p(0);
			Assert::AreEqual(result, 1.0);
		}
	};
}
