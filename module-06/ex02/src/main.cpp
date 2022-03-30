#include "Base.hpp"
#include "ABC.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base *generate()
{
	std::srand(time(NULL));

	int type = std::rand() % 3;
	switch (type)
	{
	case 0:
		return new A;
	case 1:
		return new B;
	case 2:
		return new C;
	default:
		return NULL;
	}
}

void identify(Base *ptr)
{
	std::string type = "undefined";

	if (dynamic_cast<A *>(ptr) != NULL)
		type = "A";
	else if (dynamic_cast<B *>(ptr) != NULL)
		type = "B";
	else if (dynamic_cast<C *>(ptr) != NULL)
		type = "C";

	std::cout << "Type: " << type << std::endl;
}

void identify(Base &ref)
{
	Base *ptr = &ref;

	std::string type = "undefined";

	if (dynamic_cast<A *>(ptr) != NULL)
		type = "A";
	else if (dynamic_cast<B *>(ptr) != NULL)
		type = "B";
	else if (dynamic_cast<C *>(ptr) != NULL)
		type = "C";

	std::cout << "Type: " << type << std::endl;
}

int main()
{
	Base *ptr = generate();
	Base *ref = generate();

	identify(ptr);
	identify(*ref);
	delete ptr;
	delete ref;
	return (0);
}
