#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string	_name;

	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &in );
		~DiamondTrap( void );

		DiamondTrap	&operator=( const DiamondTrap &in );

		void	whoAmI( void );
		void	attack( std::string const &target ) const;
};

#endif