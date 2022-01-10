#include "Karen.hpp"

int	main( int argc, char **argv )
{
	if (argc != 2)
		return 1;

	Karen	Karen;

	PRINT("");
	Karen.complain(Karen.getLevel(argv[1]));
	PRINT("");
	
	return 0;
}