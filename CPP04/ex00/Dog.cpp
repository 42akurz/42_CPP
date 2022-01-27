#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	PRINT("Dog		constructor called");
}

Dog::Dog( const Dog &in )
{
	this->type = in.type;
	PRINT("Dog		copy constructor called");
}

Dog::~Dog( void )
{
	PRINT("Dog		destructor called");
}

Dog	&Dog::operator=( const Dog &in )
{
	this->type = in.type;
	PRINT("Dog		operator= called");
	return *this;
}

std::string	Dog::getType( void ) const
{
	return this->type;
}

void Dog::makeSound( void ) const
{
	std::cout << this->type << "		" << "Wuff" << std::endl;
}