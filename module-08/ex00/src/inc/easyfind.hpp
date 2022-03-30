#if !defined(___EASYFIND_HPP___)
#define ___EASYFIND_HPP___

#include <exception>
#include <algorithm>

struct OccurrenceNotFoundException : public std::exception
{

	const char *what() const throw()
	{
		return "OccurrenceNotFoundException";
	}
};

template <typename T>
typename T::const_iterator easyfind(const T &t, int to_find)
{
	typename T::const_iterator it = std::find(t.begin(), t.end(), to_find);
	if (it == t.end())
		throw OccurrenceNotFoundException();
	return it;
}

#endif // ___EASYFIND_HPP___
