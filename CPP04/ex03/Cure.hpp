#pragma once

#ifndef	CURE_HPP
#define	CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure();
		explicit Cure( const Cure &in );
		virtual ~Cure();

		Cure		&operator=( const Cure &in );

		AMateria*	clone() const;
		void		use( ICharacter& target );
};

#endif