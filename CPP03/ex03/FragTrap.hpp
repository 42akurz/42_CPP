#pragma once
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap &in );
		virtual ~FragTrap( void );

		FragTrap	&operator=( const FragTrap &in );

		void	highFivesGuys( void );
};

#endif