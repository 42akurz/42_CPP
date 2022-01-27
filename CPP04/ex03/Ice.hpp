#pragma once

#ifndef	ICE_HPP
#define	ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice();
		explicit Ice( const Ice &in );
		virtual ~Ice();

		Ice			&operator=( const Ice &in );

		AMateria*	clone() const;
		void		use( ICharacter& target );
};

#endif