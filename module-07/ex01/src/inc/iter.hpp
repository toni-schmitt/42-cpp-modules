#if !defined(___ITER_HPP___)
#define ___ITER_HPP___

#include <iostream>

template <typename T>
void iter(T *array, int length, void (*f)(const T &val))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void print(const T &val)
{
	std::cout << val << std::endl;
}

#endif // ___ITER_HPP___
