#include <string>
#include <iostream>

#include "Converter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Only one Argument" << std::endl;
		return EXIT_FAILURE;
	}

	std::string arg = argv[1];

	Converter conv(arg);

	conv.convert();
	conv.printTypes();

	return EXIT_SUCCESS;
}
