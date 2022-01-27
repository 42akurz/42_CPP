#include "Point.hpp"

int	main( void )
{
	Point	test1(5.4f, 8.7f);
	Point	test2( test1 );
	Point	test3 = test2;

	std::cout << std::endl;

	std::cout << test1.getX() << "		" << test1.getY() << std::endl;
	std::cout << test2.getX() << "		" << test2.getY() << std::endl;
	std::cout << test3.getX() << "		" << test3.getY() << std::endl;
	
	std::cout << std::endl;

	Point	a(0.0f, 0.0f);
	Point	b(0.0f, 10.0f);
	Point	c(9.0f, 5.0f);
	Point	p(9.0f, 5.0f);

	std::cout << std::endl;

	std::cout << bsp(a, b, c, p) << std::endl;
	
	std::cout << std::endl;

	return 0;
}