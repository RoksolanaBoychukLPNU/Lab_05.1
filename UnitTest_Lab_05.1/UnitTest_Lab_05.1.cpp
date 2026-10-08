#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.1/Lab_05.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
    TEST_CLASS(UnitTest51)
    {
    public:

        // k(1, 1) = 1/|1+1| + 1/|1+1| = 0.5 + 0.5 = 1
        TEST_METHOD(TestK_1_1)
        {
            double t = k(1, 1);
            Assert::AreEqual(1.0, t);
        }

        // k(2, 0) = 2/|8| + 0/|2| = 0.25
        TEST_METHOD(TestK_2_0)
        {
            double t = k(2, 0);
            Assert::AreEqual(0.25, t);
        }

        // k(3, 3) = 3/54 + 3/6 = 5/9
        TEST_METHOD(TestK_3_3)
        {
            double t = k(3, 3);
            Assert::AreEqual(5.0 / 9, t);
        }
    };
}
