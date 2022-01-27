#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &in );
		virtual ~ScavTrap( void );

		ScavTrap	&operator=( const ScavTrap &in );

		void	guardGate( void );
		void	attack( std::string const &target ) const;
};

#endif