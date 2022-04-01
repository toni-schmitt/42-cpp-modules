#include "Span.hpp"

#include <iostream>
#include <limits>
#include <algorithm>

/* Constructors */
Span::Span() : _maxElements(0)
{
	this->_elements.reserve(this->_maxElements);
}

Span::Span(const Span &copy) : _maxElements(copy._maxElements), _elements(copy._elements) {}

Span::Span(unsigned int maxElements) : _maxElements(maxElements)
{
	this->_elements.reserve(this->_maxElements);
}

/* Deconstructors */
Span::~Span() {}

/* Overloaded Operators */
Span &Span::operator=(const Span &sec)
{
	if (this == &sec)
		return *this;
	if (sec._elements.size() > this->_maxElements)
		return *this;

	for (std::vector<int>::const_iterator it = sec._elements.begin(); it != sec._elements.end(); it++)
	{
		this->_elements.push_back(*it);
	}

	return *this;
}

/* Public Methods */
int Span::shortestSpan() const
{
	if (this->_elements.size() <= 1)
		throw NoSpanFoundException();

	std::vector<int> copy(this->_elements);
	std::sort(copy.begin(), copy.end());

	const std::vector<int>::iterator lastElement = copy.end() - 1;
	int minSpan = std::numeric_limits<int>::max();
	for (std::vector<int>::iterator it = copy.begin(); it != lastElement; it++)
	{
		minSpan = std::min(minSpan, *(it + 1) - *it);
	}
	return minSpan;
}

int Span::longestSpan() const
{
	if (this->_elements.size() == 0 || this->_elements.size() == 1)
		throw NoSpanFoundException();

	int max = *std::max_element(this->_elements.begin(), this->_elements.end());
	int min = *std::min_element(this->_elements.begin(), this->_elements.end());
	return max - min;
}

void Span::addNumber(int nbr)
{
	if (this->_elements.size() + 1 > this->_maxElements)
		throw NoFreeElementException();

	this->_elements.push_back(nbr);
}

void Span::addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	for (std::vector<int>::const_iterator it = begin; it != end; it++)
	{
		if (this->_elements.size() + 1 > this->_maxElements)
			throw NoFreeElementException();
		this->_elements.push_back(*it);
	}
}

/* Getter */

/* Setter */
