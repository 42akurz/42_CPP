#include "Karen.hpp"

int	main( void )
{
	Karen	Karen;

	PRINT("");
	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
	Karen.complain("doesnt exist");
	Karen.complain("");
	PRINT("");
	return 0;
}