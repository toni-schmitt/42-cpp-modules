#include "easyfind.hpp"

#include <vector>
#include <iostream>

int main(void)
{
	int to_find = 300;
	int content[] = {1324, 4068, 20349, 203847, 1, 23408234, 23482, 23948, to_find};
	std::vector<int> vec(content, content + sizeof(content) / sizeof(int));
	try
	{
		std::vector<int>::const_iterator it = easyfind(vec, to_find);
		std::cout << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	to_find = 301;
	try
	{
		std::vector<int>::const_iterator it = easyfind(vec, to_find);
		std::cout << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}