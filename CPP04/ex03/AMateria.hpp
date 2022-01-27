#pragma once

#ifndef	AMATERIA_HPP
#define	AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
class	ICharacter;

#define PRINT(__msg) (std::cout << __msg << std::endl)


class AMateria {

	protected:
		std::string	_type;

	public:
		explicit AMateria( std::string const & type );
		AMateria();
		explicit AMateria( const AMateria &in );
		virtual ~AMateria();

		AMateria			&operator=( const AMateria &in );

		std::string const	&getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use( ICharacter& target );
};

#endif