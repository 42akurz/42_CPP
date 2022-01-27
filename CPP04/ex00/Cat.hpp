#pragma once

#include "Animal.hpp"

class Cat : public Animal {

	public:
		Cat();
		Cat( const Cat &in );
		~Cat();

		Cat	&operator=( const Cat &in );

		std::string	getType( void ) const;
		void makeSound( void ) const;
};