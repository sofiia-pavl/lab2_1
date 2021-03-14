#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2,1/Combination.h"
#include "C:\Users\Софія\source\repos\lab2,1\lab2,1\Combination.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Combination t(4,6);
			int a;
			a = t.combination();
			Assert::AreEqual(a, 15);
		}
	};
}
