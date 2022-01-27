#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const Fixed &in )
{
	this->_fixedPointValue = in._fixedPointValue;
}

Fixed::Fixed( const int in )
{
	this->_fixedPointValue = (in << this->_scale);
}

Fixed::Fixed( const float in )
{
	this->_fixedPointValue = (in * (float)(1 << this->_scale));
}

Fixed::~Fixed( void )
{
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

Fixed	Fixed::operator++( int dummy )
{
	Fixed	temp = *this;
	dummy = this->getRawBits() + 1;
	this->setRawBits(dummy);
	return temp;
}

Fixed	&Fixed::operator++( void )
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator--( int dummy )
{
	Fixed	temp = *this;
	dummy = this->getRawBits() - 1;
	this->setRawBits(dummy);
	return temp;
}

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