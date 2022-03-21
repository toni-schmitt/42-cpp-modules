#include "Converter.hpp"

#include <iomanip>
#include <iostream>
#include <sstream>
#include <cmath>

/* Constructors */
Converter::Converter()
{
	this->_arg = "undefined";
}

Converter::Converter(const Converter &copy)
{
	this->_arg = copy._arg;
}

Converter::Converter(std::string arg)
{
	this->_arg = arg;
}

/* Deconstructors */
Converter::~Converter()
{
}

/* Overloaded Operators */
Converter &Converter::operator=(const Converter &sec)
{
	if (this == &sec)
		return *this;

	this->_arg = sec._arg;
	return *this;
}

/* Private Methods */
void Converter::determineType()
{


	// Try Get Char
	std::stringstream(this->_arg);


	this->_type = no_type;

	// Char Type
	if (this->_arg.length() == 3 && this->_arg[0] == '\'' && this->_arg[2] == '\'')
	{
		this->_type = char_type;
		return;
	}

	// Definitife Float Type
	if (this->_arg.compare("-inff") == 0 || this->_arg.compare("+inff") == 0 || this->_arg.compare("nanf") == 0)
	{
		this->_type = float_type;
		return;
	}
	// Definitife Double Type
	if (this->_arg.compare("-inf") == 0 || this->_arg.compare("+inf") == 0 || this->_arg.compare("nan") == 0)
	{
		this->_type = double_type;
		return;
	}

	// Double or Float
	if (this->_arg.find('.') != std::string::npos)
	{
		this->_type = double_type;
		// Definitife Float
		if (this->_arg.find('f'))
		{
			this->_type = float_type;
			return;
		}
		return;
	}

	// int
	for (size_t i = 0; i < this->_arg.length(); i++)
	{
		literal_type last_type = this->_type;
		if (isdigit(this->_arg[i]))
			this->_type = int_type;
		else
			this->_type = last_type;
	}
}

void Converter::convertToType()
{
	switch (this->_type)
	{
	case char_type:
		this->_charData = this->_arg[1];

		this->_intData = static_cast<int>(this->_charData);
		this->_doubleData = static_cast<double>(this->_charData);
		this->_floatData = static_cast<float>(this->_charData);
		return;

	case int_type:
		this->_intData = atoi(this->_arg.c_str());

		this->_charData = static_cast<char>(this->_intData);
		this->_doubleData = static_cast<double>(this->_intData);
		this->_floatData = static_cast<float>(this->_intData);
		return;

	case double_type:
		this->_doubleData = atof(this->_arg.c_str());

		this->_charData = static_cast<char>(this->_doubleData);
		this->_intData = static_cast<int>(this->_doubleData);
		this->_floatData = static_cast<float>(this->_doubleData);
		return;

	case float_type:
		this->_floatData = atof(this->_arg.c_str());

		this->_charData = static_cast<char>(this->_floatData);
		this->_intData = static_cast<int>(this->_floatData);
		this->_doubleData = static_cast<double>(this->_floatData);
		return;

	case no_type:
		return;
	}
}

bool Converter::isPseudoLiteral() const
{
	if (this->_type != double_type && this->_type != float_type)
		return false;

	if (std::isnan(this->_doubleData) || std::isnan(this->_floatData))
		return true;
	
	if (std::isinf(this->_doubleData) || std::isinf(this->_floatData))
		return true;

	return false;
}

/* Public Methods */
void Converter::convert()
{
	this->determineType();
	this->convertToType();
}

void Converter::printTypes() const
{
	// char
	std::cout << "char: ";
	if (this->isPseudoLiteral())
		std::cout << "impossible";
	else if (!std::isprint(this->_charData))
		std::cout << "Non displayable";
	else
		std::cout << "'" << this->_charData << "'"; 
	std::cout << std::endl;
	// int
	std::cout << "int: ";
	if (this->isPseudoLiteral())
		std::cout << "impossible";
	else
		std::cout << this->_intData;
	std::cout << std::endl;
	// float
	std::cout << "float: " << std::fixed << this->_floatData << "f" << std::endl;
	// double
	std::cout << "double: " << std::fixed << this->_doubleData << std::endl;
}

/* Getter */

/* Setter */
