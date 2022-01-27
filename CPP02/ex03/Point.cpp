#include "Point.hpp"

Point::Point( void ) : x(0), y(0)
{
	PRINT("default constructor called");
}

Point::Point( const float in1, const float in2 ) : x(in1), y(in2)
{
	PRINT("parameter constructor called");
}

Point::Point( const Point &in ) : x(in.x.toFloat()), y(in.y.toFloat())
{
	PRINT("copy constructor called");
}

Point::~Point( void )
{
	PRINT("destructor called");
}

Point	&Point::operator=( Point const & )
{
	PRINT("assignation operator called");
	return *this;
}

const Fixed	&Point::getX( void ) const
{
	return this->x;
}

const Fixed	&Point::getY( void ) const
{
	return this->y;
}