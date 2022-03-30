#include "Array.hpp"

void testEmptyIntArray()
{
	int size = 200;
	std::cout << "Create Empty Int Array of size 200" << std::endl;
	Array<int> arr = Array<int>(size);
	std::cout << "Output Empty Int Array with overload << operator" << std::endl;
	std::cout << arr;
}

void testStringArray()
{

	int size = 13;
	std::cout << "Create Empty String Array of size " << size << std::endl;
	Array<std::string> arr = Array<std::string>(size);
	std::cout << "Output Empty String Array with overload << operator" << std::endl;
	std::cout << arr;
	int index = 4;
	std::cout << "Assing at index " << index << " a random string" << std::endl;
	try
	{
		arr[index] = "Random String";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	index = 20;
	std::cout << "Assign at index " << index << " a random string" << std::endl;
	try
	{
		arr[index] = "Random String";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Output Empty String Array (filled with random values) with overload << operator" << std::endl;
	std::cout << arr;
}

struct test
{
	int i;
	float f;
	std::string s;
};

std::ostream &operator<<(std::ostream &os, const test &tst)
{
	os << "[" << tst.i << ", " << tst.f << ", " << tst.s << "]";
	return os;
}

void testStructArray()
{

	int size = 37;
	std::cout << "Create Empty Struct Array of size " << size << std::endl;
	Array<test> arr = Array<test>(size);
	std::cout << "Output Empty Struct Array with overload << operator" << std::endl;
	std::cout << arr;
	int index = 4;
	std::cout << "Assing at index " << index << " a random struct" << std::endl;
	test a;
	a.i = 23;
	a.f = 235.234f;
	a.s = "Hello Struct";
	try
	{
		arr[index] = a;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	index = 234;
	std::cout << "Assign at index " << index << " a random struct" << std::endl;
	try
	{
		arr[index] = a;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Output Empty Struct Array (filled with random values) with overload << operator" << std::endl;
	std::cout << arr;
}

int main(void)
{
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "Testing with basic type Int" << std::endl;
	testEmptyIntArray();
	std::cout << "--------------------------------------------------" << std::endl;

	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "Testing with class type String" << std::endl;
	testStringArray();
	std::cout << "--------------------------------------------------" << std::endl;

	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "Testing with type struct" << std::endl;
	testStructArray();
	std::cout << "--------------------------------------------------" << std::endl;

}