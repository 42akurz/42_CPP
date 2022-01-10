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
		void	_insignificant( void );

	public:
		Karen();
		~Karen();

		int		getLevel( std::string level );
		void	complain( int level );
};

#endif