#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_Lab_2.3/Source.cpp"
#include "../OOP_Lab_2.3/Vector3D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Vector3D a, l, r;
			l.SetX(10);
			l.SetY(-4);
			l.SetZ(-12);
			r.SetX(-7);
			r.SetY(15);
			r.SetZ(8);
			double t = DobOfVectors(l, r);
			Assert::AreEqual(-226., t);
		}
	};
}
