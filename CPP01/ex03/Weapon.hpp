#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

#define PRINT(__MSG) (std::cout << __MSG << std::endl)

class Weapon {

	private:
		std::string	_type;

	public:
		Weapon( std::string type );
		Weapon( void );
		~Weapon();

		std::string const	&getType( void );
		void				setType( std::string type );
};

#endif