#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat();
		WrongCat( const WrongCat &in );
		~WrongCat();

		WrongCat	&operator=( const WrongCat &in );
		
		void makeSound( void ) const;
};