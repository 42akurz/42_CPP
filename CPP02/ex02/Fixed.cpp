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

Fixed::Fixed( const int in )
{
	PRINT("int constructor called");
	this->_fixedPointValue = (in << this->_scale);
}

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

float	Fixed::toFloat( void ) const
{
	return (float)this->_fixedPointValue / (float)(1 << this->_scale);
}

int	Fixed::toInt( void ) const
{
	return this->_fixedPointValue >> this->_scale;
}

Fixed	&Fixed::operator=( Fixed const &in )
{
	std::cout << "assignation operator called" << std::endl;

	this->_fixedPointValue = in.getRawBits();
	return *this;
}

Fixed	Fixed::operator+( Fixed const &in ) const
{
	return Fixed(this->toFloat() + in.toFloat());
}

Fixed	Fixed::operator-( Fixed const &in ) const
{
	return Fixed(this->toFloat() - in.toFloat());
}

/*
	for multiplication and division im doing an addition bitshift before calculating.
	The reason is that if i dont do it, there might be so many 0 at the right of the
	fixed point representation that therelevant ones arent included in the result anymore and it will
	just be 0.

	f.ex 7 * 3
	0000 0000 0000 0111.0000 0000 0000 0000
	0000 0000 0000 0011.0000 0000 0000 0000
	would equal to somethig like this:
	11111000000000000000000000000000000000000000
	and if it doesnt fit in a 32 bit Int,  the result is 0, because when we convert the result back from
	fixed point to float or Int, we only shift the last 32bits
*/
Fixed	Fixed::operator*( Fixed const &in ) const
{
	int	shiftedThis = this->getRawBits() >> this->_scale / 2;
	int	shiftedIn = in.getRawBits() >> this->_scale / 2;

	return Fixed(((float)(shiftedIn * shiftedThis) / (float)(1 << this->_scale)));
}

Fixed	Fixed::operator/( Fixed const &in ) const
{
	int	shiftedThis = this->getRawBits() << this->_scale;

	return Fixed(((float)(shiftedThis / in.getRawBits()) / (float)(1 << this->_scale)));
}

std::ostream	&operator<<( std::ostream &o, Fixed const &in )
{
	o << in.toFloat();
	return o;
}

bool	Fixed::operator>( Fixed const &in ) const
{
	PRINT("> operator called!");
	if (this->getRawBits() > in.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<( Fixed const &in ) const
{
	PRINT("< operator called!");
	if (this->getRawBits() < in.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator>=( Fixed const &in ) const
{
	PRINT(">= operator called!");
	if (this->getRawBits() >= in.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<=( Fixed const &in ) const
{
	PRINT("<= operator called!");
	if (this->getRawBits() <= in.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator==( Fixed const &in ) const
{
	PRINT("== operator called!");
	if (this->getRawBits() == in.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator!=( Fixed const &in ) const
{
	PRINT("!= operator called!");
	if (this->getRawBits() != in.getRawBits())
		return true;
	else
		return false;
}

/* post increment */
Fixed	Fixed::operator++( int )
{
	Fixed	temp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return temp;
}

/* pre increment */
Fixed	&Fixed::operator++( void )
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

/* post decrement */
Fixed	Fixed::operator--( int )
{
	Fixed	temp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return temp;
}

/* pre decrement */
Fixed	&Fixed::operator--( void )
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed	&Fixed::max( Fixed &in1, Fixed &in2 )
{
	if (in1 > in2)
		return in1;
	else
		return in2;
}

const Fixed	&Fixed::max( Fixed const &in1, Fixed const &in2 )
{
	if (in1 > in2)
		return in1;
	else
		return in2;
}

Fixed	&Fixed::min( Fixed &in1, Fixed &in2 )
{
	if (in1 < in2)
		return in1;
	else
		return in2;
}

const Fixed	&Fixed::min( Fixed const &in1, Fixed const &in2 )
{
	if (in1 < in2)
		return in1;
	else
		return in2;
}