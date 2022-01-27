#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	Fixed	first1;
	Fixed	first2;

	first1 = (((b.getY() - point.getY()) * (a.getX() - point.getX())) - ((a.getY() - point.getY()) * (b.getX() - point.getX())));
	first2 = (((c.getY() - point.getY()) * (a.getX() - point.getX())) - ((a.getY() - point.getY()) * (c.getX() - point.getX())));

	if (first1.toFloat() * first2.toFloat() > 0)
		return false;

	Fixed	second1;
	Fixed	second2;

	second1 = (((a.getY() - point.getY()) * (b.getX() - point.getX())) - ((b.getY() - point.getY()) * (a.getX() - point.getX())));
	second2 = (((c.getY() - point.getY()) * (b.getX() - point.getX())) - ((b.getY() - point.getY()) * (c.getX() - point.getX())));

	if (second1.toFloat() * second2.toFloat() > 0)
		return false;

	return true;
}
