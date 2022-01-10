#pragma once
#ifndef KAREN_HPP
#define KARENHPP

#include <string>
#include <iostream>

#define PRINT(__msg) (std::cout << __msg << std::endl)

class Karen {

	private:
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );

	public:
		Karen();
		~Karen();

		void	complain( std::string level );
};

#endif