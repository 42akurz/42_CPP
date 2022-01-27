#pragma once

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:
		AMateria *_templates[4];

	public:
		MateriaSource();
		MateriaSource( const MateriaSource &in );
		virtual ~MateriaSource();

		MateriaSource	&operator=( const MateriaSource &in );
		
		void		learnMateria( AMateria* );
		AMateria*	createMateria( std::string const & type );
};

#endif