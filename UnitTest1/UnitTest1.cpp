#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_10.1/LAB_10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCalculateTotalSymbolOccurrences)
		{
			
			std::string filename = "test_file.txt";
			std::ofstream testFile(filename);
			testFile << "++-==--===-+++" << std::endl;
			testFile.close();

			
			int result = CalculateTotalSymbolOccurrences(filename);

			Assert::AreEqual(14, result);
		}
	};
}
