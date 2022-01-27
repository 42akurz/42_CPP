#include "Fixed.hpp"

int	main( void )
{
	Fixed	a;
	Fixed	b( a );
	Fixed	c;

	c = b;

	PRINT(a.getRawBits());
	PRINT(b.getRawBits());
	PRINT(c.getRawBits());

	return 0;
}