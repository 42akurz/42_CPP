#pragma once 

# include <iostream>
# include <string>

# define PRINT(__msg) (std::cout << __msg << std::endl)

class WrongAnimal {

	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal &in );
		~WrongAnimal();

		WrongAnimal	&operator=( const WrongAnimal &in );

		void makeSound( void ) const;
};