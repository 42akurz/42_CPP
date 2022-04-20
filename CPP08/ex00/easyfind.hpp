#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <exception>
# include <algorithm>
# include <vector>
# include <list>
# include <map>
# include <set>

# define LOG(x) (std::cout << x << std::endl)

template< typename T >
typename T::iterator	easyfind( T &container, const int other )
{
	if (container.end() == std::find(container.begin(), container.end(), other))
		throw std::invalid_argument("element was not found in container");
	return std::find(container.begin(), container.end(), other);
}

template< typename T >
typename T::iterator	easyfindForMap( T &container, const int other)
{
	if (container.find(other) == container.end())
		throw std::invalid_argument("element was not found in container");
	return container.find(other);
}

#endif