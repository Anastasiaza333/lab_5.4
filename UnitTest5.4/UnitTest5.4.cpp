#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t =P4(1,1,2,1) ;
			Assert::AreEqual(t, 5.);
		}
	};
}
