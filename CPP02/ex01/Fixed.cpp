#include "Fixed.hpp"

Fixed::Fixed( void )
{
	PRINT("default constructor called");
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const Fixed &in )
{
	PRINT("copy constructor called");
	this->_fixedPointValue = in._fixedPointValue;
}

/*
	dec		bin
	10	==	1010
													dec			bin
	fixed point = 10 << 8 == 10*2*2*2*2*2*2*2*2 == 2560 == 1010 . 0000 0000
						^ bits of fixed point number			^-binary point
*/
Fixed::Fixed( const int in )
{
	PRINT("int constructor called");

	this->_fixedPointValue = (in << this->_scale);
}

/*
	float
	10.75f
					->	11	*		1 << 8
	fixed point = (roundf(in * (1 << this->_bits)) == 11*256 == 10.78f*2*2*2*2*2*2*2*2 == 2760

	x			xxxxxxxx		xxxxxxxx
	sign bit	10 in bits		.75 in bits
	0			0000 1010		11000000
*/
Fixed::Fixed( const float in )
{
	PRINT("float constructor called");

	this->_fixedPointValue = (in * (float)(1 << this->_scale));
}

Fixed::~Fixed( void )
{
	PRINT("destructor called");
}

int	Fixed::getRawBits( void ) const
{
	return this->_fixedPointValue;
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

Fixed	&Fixed::operator=( Fixed const &in )
{
	std::cout << "assignation operator called" << std::endl;

	this->_fixedPointValue = in.getRawBits();
	return *this;
}

/*
	FLOAT:
	dec					bin
	2760(10.78f)	==	1010 1100 10000

						dec				bin
	int = 2760 >> 8 == 10 == (0000 0000) 1010
				  ^ bits of fixed point number
*/
float	Fixed::toFloat( void ) const
{
	return (float)this->_fixedPointValue / (float)(1 << this->_scale);
}

/*
	INTEGER:
	dec				bin
	2560(10)	==	1010 0000 0000

												dec		bin
	int = 2560 >> 8 == 2560/2/2/2/2/2/2/2/2 ==	10	==	1010
				  ^ bits of fixed point number
*/
int	Fixed::toInt( void ) const
{
	return this->_fixedPointValue >> this->_scale;
}

std::ostream	&operator<<( std::ostream &o, Fixed const &in )
{
	o << in.toFloat();
	return o;
}