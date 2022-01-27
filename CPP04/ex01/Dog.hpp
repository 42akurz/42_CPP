#pragma once

#include "Animal.hpp"

class Dog : public Animal {

	private:
		Brain	*brain;

	public:
		Dog();
		Dog( const Dog &in );
		~Dog();

		Dog	&operator=( const Dog &in );

		std::string	getType( void ) const;
		void		makeSound( void ) const;
		void		printIdeas( void ) const;
		void		setIdeas( int idx, std::string idea ) const;
};