#if !defined(___MUTANTSTACK_HPP___)
#define ___MUTANTSTACK_HPP___

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	/* Constructors */
	MutantStack() : std::stack<T>(){};
	MutantStack(const MutantStack &copy) : std::stack<T>(copy){};
	MutantStack(const std::stack<T> &copy) : std::stack<T>(copy){};
	/* Deconstructors */
	virtual ~MutantStack(){};

	/* Overloaded Operators */
	MutantStack &operator=(const MutantStack &sec)
	{
		if (this == &sec)
			return *this;

		this->c = sec.c;
		return *this;
	};

	/* Iterators */
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }

	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	const_iterator begin() const { this->c.begin(); }
	const_iterator end() const { this->c.end(); }

	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin() { return this->c.rbegin(); }
	reverse_iterator rend() { return this->c.rend(); }

	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	const_reverse_iterator rbegin() const { return this->c.rbegin(); }
	const_reverse_iterator rend() const { return this->c.rend(); }
	
};

#endif