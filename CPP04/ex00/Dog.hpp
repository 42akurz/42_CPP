#pragma once

#include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog();
		Dog( const Dog &in );
		~Dog();

		Dog	&operator=( const Dog &in );

		std::string	getType( void ) const;
		void makeSound( void ) const;
};