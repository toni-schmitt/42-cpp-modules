#include "iter.hpp"

void testIntArr()
{
	int arr[] = { 5, 123, 3634, 13423534, 1242352 };
	iter(arr, 5, &print);
}

void testFloatArr()
{
	float arr[] = { 12312.3923f, 29384.234f, 12312.9f, 123.923234f };
	iter(arr, 4, &print);
}

void testStringArr()
{
	std::string arr[] = {"hello", "world", "how", "are", "you", "doing"};
	iter(arr, 6, &print);
}

int main( void )
{

	testIntArr();
	testFloatArr();
	testStringArr();
	return 0;
}