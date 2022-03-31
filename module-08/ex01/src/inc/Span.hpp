#if !defined(___SPAN_HPP___)
#define ___SPAN_HPP___

#include <exception>
#include <vector>

class Span
{
private:
	/* Private Members */
	const unsigned int _maxElements;
	std::vector<int> _elements;

public:
	/* Constructors */
	Span();
	Span(const Span &copy);
	Span(unsigned int maxElements);
	/* Deconstructors */
	~Span();

	/* Overloaded Operators */
	Span &operator=(const Span &sec);

	/* Public Methods */
	int shortestSpan() const;
	int longestSpan() const;
	void addNumber(int nbr);
	void addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);

	/* Getter */

	/* Setter */

	/* Exceptions */
	struct NoFreeElementException : public std::exception
	{
		const char *what() const throw()
		{
			return "NoFreeElementException";
		}
	};

	struct NoSpanFoundException : public std::exception
	{
		const char *what() const throw()
		{
			return "NoSpanFoundException";
		}
	};
};

#endif