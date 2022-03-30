#if !defined(___WHATEVER_HPP___)
#define ___WHATEVER_HPP___

template <typename T>
void swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
const T &max(const T &x, const T &y)
{
	return x > y ? x : y;
}

template <typename T>
const T &min(const T &x, const T &y)
{
	return x < y ? x : y;
}

#endif // ___WHATEVER_HPP___
