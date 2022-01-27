#include "Fixed.hpp"

Fixed::Fixed( void )
{
	PRINT("default constructor called");
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const Fixed &in )
{
	PRINT("copy constructor called");
	this->_fixedPointValue = in.getRawBits();
}

Fixed::~Fixed( void )
{
	PRINT("Fixed destructor called");
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