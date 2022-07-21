#if !defined(___ARRAY_HPP___)
#define ___ARRAY_HPP___

#include <exception>
#include <iostream>

template <typename T>
class Array
{
private:
	/* Private Members */
	int _size;
	T *_content;

public:
	/* Constructors */
	Array()
	{
		this->_size = 0;
		this->_content = new T[this->_size];
	}

	Array(const Array& copy)
	{
		this->_size = copy.size();
		this->_content = new T[this->_size];
		for (int i = 0; i < this->_size; i++)
		{
			this->_content[i] = copy[i];
		}
	}

	Array(unsigned int n)
	{
		static T _defaultT;
		this->_size = n;
		this->_content = new T[this->_size];
		for (int i = 0; i < this->_size; i++)
		{
			this->_content[i] = _defaultT;
		}
	}

	/* Deconstructors */
	~Array()
	{
		delete[] this->_content;
	}

	/* Overloaded Operators */
	Array &operator=(const Array &sec)
	{
		if (*this == sec)
			return;
		
		delete[] this->_content;

		int sec_size = sec.size();
		this->_content = new T[sec_size];

		for (int i = 0; i < sec_size; i++)
		{
			this->_content[i] = sec[i];
		}

		return *this;
	}

	T &operator[](int index)
	{
		if (index >= this->_size || index < 0)
			throw IndexOutOfBoundsException();
		
		return this->_content[index];
	}

	const T &operator[](int index) const
	{
		if (index >= this->_size || index < 0)
			throw IndexOutOfBoundsException();
		
		return this->_content[index];
	}

	/* Public Methods */
	int size() const
	{
		return this->_size;
	}

	struct IndexOutOfBoundsException : public std::exception
	{
		const char *what() const throw()
		{
			return "IndexOutOfBoundsException";
		}
	};
};

template <typename T>
std::ostream &operator<<(std::ostream &os, Array<T> const &array)
{
	os << "Array(";
	for (int i = 0; i < array.size(); i++)
	{
		os << array[i];
		if (i + 1 != array.size())
			os << ", ";
	}
	os << ")" << std::endl;
	return os;
}


#endif