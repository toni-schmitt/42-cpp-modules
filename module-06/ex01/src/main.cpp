#include <iostream>
#include <string>
#include <stdint.h>

struct Data
{
	int i;
	float f;
	char c;
	bool b;
	void *data;
};

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{

	Data data;

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Data Struct:" << std::endl
			  << "struct Data" << std::endl
			  << "{" << std::endl
			  << "\tint i;" << std::endl
			  << "\tfloat f;" << std::endl
			  << "\tchar c;" << std::endl
			  << "\tbool b;" << std::endl
			  << "\tvoid *data" << std::endl
			  << "};" << std::endl;

	data.i = 199;
	data.f = 99.87f;
	data.c = 'x';
	data.b = true;
	data.data = &data.i;

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Fill Data Struct:" << std::endl
			  << "data.i = 199;" << std::endl
			  << "data.f = 99.87f;" << std::endl
			  << "data.c = 'x';" << std::endl
			  << "data.b = true;" << std::endl
			  << "data.data = &data.i;" << std::endl;

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Data Struct Members:" << std::endl
			  << "i\t\t" << data.i << std::endl
			  << "f\t\t" << data.f << std::endl
			  << "c\t\t" << data.c << std::endl
			  << "b\t\t" << data.b << std::endl
			  << "data\t\t" << data.data << std::endl
			  << "*((int *)data)\t" << *((int *)data.data) << std::endl;

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Serialize data to raw uintptr" << std::endl
			  << std::endl
			  << "uintptr_t raw = serialize(&data);" << std::endl;
	uintptr_t raw = serialize(&data);
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "\nDeserialize raw uintptr to Data pointer" << std::endl
			  << std::endl
			  << "Data *deserialized = deserialize(raw);" << std::endl;
	Data *deserialized = deserialize(raw);
	std::cout << "------------------------------------------" << std::endl;

	std::cout << "Data (deserialized) Members:" << std::endl
			  << "i\t\t" << deserialized->i << std::endl
			  << "f\t\t" << deserialized->f << std::endl
			  << "c\t\t" << deserialized->c << std::endl
			  << "b\t\t" << deserialized->b << std::endl
			  << "data\t\t" << deserialized->data << std::endl
			  << "*((int *)data)\t" << *((int *)deserialized->data) << std::endl
			  << "------------------------------------------" << std::endl;

	return 0;
}
