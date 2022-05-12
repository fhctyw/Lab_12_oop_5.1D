#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_oop_5.1D\RationalException.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			RationalException r("err");
			Assert::AreEqual("err", r.what());
		}
	};
}
