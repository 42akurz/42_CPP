#pragma once

#include "Animal.hpp"

class Cat : public Animal {

	private:
		Brain	*brain;

	public:
		Cat();
		Cat( const Cat &in );
		~Cat();

		Cat	&operator=( const Cat &in );

		std::string	getType( void ) const;
		void		makeSound( void ) const;
		void		printIdeas( void ) const;
		void		setIdeas( int idx, std::string idea ) const;
};