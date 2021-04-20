#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5_1_E/FuzzyNumber.cpp"
#include "../Lab_5_1_E/Object.cpp"
#include "../Lab_5_1_E/MyException.cpp"
#include "../Lab_5_1_E/MyDerivedException.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labtest51E
{
	TEST_CLASS(Labtest51E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber A(3.5, 1.2, 7.9), B(4.3, 2.0, 8.4);
			FuzzyNumber C = A + B;
			Assert::AreEqual(C.GetX(), 7.8);
		}
	};
}
