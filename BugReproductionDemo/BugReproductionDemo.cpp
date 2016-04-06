// BugReproductionDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <array>
#include <cstdint>

struct MyStructWithinArray
{
	std::uint32_t field1;
	std::uint32_t field2;
};

struct MyStructWithArray
{
	std::array<MyStructWithinArray, 8> nestedArray;
};

MyStructWithinArray demo{
	std::array<MyStructWithinArray, 8> {
		{ 1, 1 },
		{ 2, 2 },
		{ 3, 3 },
		{ 4, 4 },
		{ 5, 5 },
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

