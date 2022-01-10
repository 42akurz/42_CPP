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


void	Karen::complain( std::string level )
{
	/* array of levels */
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	/* array of funtion pointers */
	typedef	void(Karen::*functionArray[])();
	functionArray functions = {
		&Karen::_debug,
		&Karen::_info,
		&Karen::_warning,
		&Karen::_error
	};

	/* Syntax to call a member function via member function pointer is: (this->*memf)(); */
	for (unsigned long i = 0; i < sizeof(levels) / sizeof(levels[0]); i++)
	{
		if (levels[i] == level)
			(this->*functions[i])();
	}
}