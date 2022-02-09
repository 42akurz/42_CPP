#include "iter.hpp"

int	main( void )
{
	int			arr1[] = {0, 1, 2, 3};
	char		arr2[] = {'a', 'b', 'c', 'd'};

	iter(arr1, 4, print);

	std::cout << std::endl;

	iter(arr1, 4, addOne);
	iter(arr1, 4, print);

	std::cout << std::endl;

	iter(arr2, 4, print);
	std::cout << std::endl;

	iter(arr2, 4, addOne);
	iter(arr2, 4, print);
	
	return 0;
}