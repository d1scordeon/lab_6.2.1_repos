#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\pr_6.2.1\lab_6.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 4;

			int a[size] = { 2, 4, 6, 8 };

			int max = a[0];
			for (int i = 1; i < size; i++)
				if (a[i] > max)
					max = a[i];
			Assert::AreEqual(8, max);
		}
	};
}
