#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &in );
		virtual ~ScavTrap( void );

		ScavTrap	&operator=( const ScavTrap &in );

		void			guardGate( void );
		virtual void	attack( std::string const &target ) const;
};

#endif