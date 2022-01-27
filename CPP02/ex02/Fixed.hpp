#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

#define PRINT(__msg) (std::cout << __msg << std::endl)

class Fixed {

	private:
		int					_fixedPointValue;
		static const int	_scale = 8;

	public:
		Fixed( void );
		Fixed( const Fixed &in );
		~Fixed();
		Fixed( const int in );
		Fixed( const float in );

		Fixed	&operator=( Fixed const &in );

		bool	operator>( Fixed const &in ) const;
		bool	operator<( Fixed const &in ) const;
		bool	operator>=( Fixed const &in ) const;
		bool	operator<=( Fixed const &in ) const;
		bool	operator==( Fixed const &in ) const;
		bool	operator!=( Fixed const &in ) const;

		Fixed	operator+( Fixed const &in ) const;
		Fixed	operator-( Fixed const &in ) const;
		Fixed	operator*( Fixed const &in ) const;
		Fixed	operator/( Fixed const &in ) const;

		Fixed	operator++( int );
		Fixed	&operator++( void );
		Fixed	operator--( int );
		Fixed	&operator--( void );

		static Fixed	&max( Fixed &in1, Fixed &in2 );
		static const Fixed	&max( Fixed const &in1, Fixed const &in2 );

		static Fixed	&min( Fixed &in1, Fixed &in2 );
		static const Fixed	&min( Fixed const &in1, Fixed const &in2 );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream	&operator<<( std::ostream &o, Fixed const &in );

#endif