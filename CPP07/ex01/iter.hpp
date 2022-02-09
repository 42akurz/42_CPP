#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void	print( T value )
{
	std::cout << value << std::endl;
}

template< typename T >
void	addOne( T value )
{
	value += 1;
}

template< typename Array >
void	iter( Array *arr, int len, void(*function)(Array &a))
{
	for (int i = 0; i < len; i++)
		function(arr[i]);
}

#endif