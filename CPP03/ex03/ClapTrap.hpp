#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define PRINT(__msg) (std::cout << __msg << std::endl)

class ClapTrap {

	protected:
		std::string	_name;
		int			_hitpoints;
		int			_energy_points;
		int			_attack_demage;
	
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &in );
		virtual ~ClapTrap();

		ClapTrap	&operator=( const ClapTrap &in );

		virtual void	attack( std::string const &target ) const;
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
};

#endif