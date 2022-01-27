#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	PRINT("Cat		constructor called");
}

Cat::Cat( const Cat &in )
{
	this->type = in.type;
	PRINT("Cat		copy constructor called");
}

Cat::~Cat( void )
{
	PRINT("Cat		destructor called");
}

Cat	&Cat::operator=( const Cat &in )
{
	this->type = in.type;
	PRINT("Cat		operator= called");
	return *this;
}

std::string	Cat::getType( void ) const
{
	return this->type;
}

void Cat::makeSound( void ) const
{
	std::cout << this->type << "		" << "Miau" << std::endl;
}