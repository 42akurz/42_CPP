#include "Fixed.hpp"

/*
	fixed point numbers dont represent their normal integer values,
	they represnt their value as radix point at some fixed location (depending on scale factor)
	if scale is 8, scale factor is actually:	1 / 2^8

	118 in binary			118/16 (7.357)		118/4 (29.5)		118/64 (1.84375)
	0111 0110				0111.0110			0111 01.10			01.11 0110
*/
int	main( void )
{
	Fixed		a;
	Fixed const	b( 21 );
	Fixed const	c( 3 );
	Fixed const	d( c * b );
	Fixed const	e( b / c );
	Fixed 		f;
	Fixed		g( b + c);

	a = b + c;
	f = c - b;

	std::cout << std::endl;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "g = " << g << std::endl;

	std::cout << std::endl;

	if (e > c)
		PRINT("e > c is true");
	if (b < a)
		PRINT("b < a is true");
	if (a == g)
		PRINT("a == g is true");
	if (a == g && a >= g && a <= g)
		PRINT("a == g && a >= g && a <= g is true");
	if (c != d)
		PRINT("c != d is true");

	std::cout << std::endl;

	std::cout << ++g << std::endl;
	std::cout << g++ << std::endl;
	std::cout << g << std::endl;
	std::cout << --f << std::endl;
	std::cout << f-- << std::endl;
	std::cout << f << std::endl;

	std::cout << std::endl;

	std::cout << Fixed::max(a, f) << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::min(f, b) << std::endl;

	std::cout << std::endl;
	
	return 0;
}