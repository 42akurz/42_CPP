#pragma once 

# include <iostream>
# include <string>

# define PRINT(__msg) (std::cout << __msg << std::endl)

class Animal {

	protected:
		std::string	type;

	public:
		Animal();
		Animal( const Animal &in );
		virtual ~Animal();

		Animal	&operator=( const Animal &in );

		virtual void makeSound( void ) const;
		virtual	std::string	getType( void ) const;
};
