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

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{

	Data data;

	data.i = 199;
	data.f = 99.87f;
	data.c = 'x';
	data.b = true;
	data.data = &data.i;

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Fill Data Struct:" << std::endl;
	std::cout << "data.i = 199;" << std::endl;
	std::cout << "data.f = 99.87f;" << std::endl;
	std::cout << "data.c = 'x';" << std::endl;
	std::cout << "data.b = true;" << std::endl;
	std::cout << "data.data = &data.i;" << std::endl;

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Data Struct Members:" << std::endl;
	std::cout << "i\t\t" << data.i << std::endl;
	std::cout << "f\t\t" << data.f << std::endl;
	std::cout << "c\t\t" << data.c << std::endl;
	std::cout << "b\t\t" << data.b << std::endl;
	std::cout << "data\t\t" << data.data << std::endl;
	std::cout << "*((int *)data)\t" << *((int *)data.data) << std::endl;
	
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Serialize data to raw uintptr" << std::endl;
	uintptr_t raw = serialize(&data);
	std::cout << "\nDeserialize raw uintptr to Data pointer" << std::endl;
	Data *deserialized = deserialize(raw);
	std::cout << "------------------------------------------" << std::endl;

	std::cout << "Data (deserialized) Members:" << std::endl;
	std::cout << "i\t\t" << deserialized->i << std::endl;
	std::cout << "f\t\t" << deserialized->f << std::endl;
	std::cout << "c\t\t" << deserialized->c << std::endl;
	std::cout << "b\t\t" << deserialized->b << std::endl;
	std::cout << "data\t\t" << deserialized->data << std::endl;
	std::cout << "*((int *)data)\t" << *((int *)deserialized->data) << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	return 0;
}
