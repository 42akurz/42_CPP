#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define PRINT(__msg) (std::cout << __msg << std::endl)

class ClapTrap {

	private:
		std::string	_name;
		int			_hitpoints;
		int			_energy_points;
		int			_attack_demage;
	
	public:
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &in );
		~ClapTrap();

		ClapTrap	&operator=( const ClapTrap &in );

		void	attack( std::string const &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif