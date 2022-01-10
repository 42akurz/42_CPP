#include "Karen.hpp"

Karen::Karen( void )
{
	PRINT("Karen constructed");
}

Karen::~Karen( void )
{
	PRINT("Karen destructed");
}

void	Karen::_debug( void )
{
	PRINT("I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!");
}

void	Karen::_info( void )
{
	PRINT("I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!");
}

void	Karen::_warning( void )
{
	PRINT("I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.");
}

void	Karen::_error( void )
{
	PRINT("This is unacceptable, I want to speak to the manager now.");
}

void	Karen::_insignificant( void )
{
	PRINT("[ Probably complaining about insignificant problems ]");
}

int	Karen::getLevel( std::string level )
{
	if (level == "DEBUG")
		return 1;
	if (level == "INFO")
		return 2;
	if (level == "WARNING")
		return 3;
	if (level == "ERROR")
		return 4;
	return 5;
}

void	Karen::complain( int level )
{
	switch (level)
	{
		case 1:
			this->_debug();
		case 2:
			this->_info();
		case 3:
			this->_warning();
		case 4:
			this->_error();
			break ;
		case 5:
			this->_insignificant();
	}
}