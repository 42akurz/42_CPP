#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

#define PRINT(__msg) (std::cout << __msg << std::endl)

class Fixed {

	private:
		int					_fixedPointValue;
		static const int	_numFracBits = 8;

	public:
		Fixed( void );
		Fixed( const Fixed &in );
		~Fixed();

		Fixed	&operator=( Fixed const &in );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif