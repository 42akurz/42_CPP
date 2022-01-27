#pragma once
#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	
	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point( void );
		Point( const float in1, const float in2 );
		Point( const Point &in );
		~Point( void );

		Point	&operator=( Point const & );

		const Fixed	&getX( void ) const;
		const Fixed	&getY( void ) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif