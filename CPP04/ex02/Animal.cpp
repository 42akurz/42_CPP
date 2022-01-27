#include "Animal.hpp"

Animal::Animal( void )
{
	this->type = "Animal";
	PRINT("Animal		constructor called");
}

Animal::Animal( const Animal &in )
{
	this->type = in.type;
	PRINT("Animal		copy constructor called");
}

Animal::~Animal( void )
{
	PRINT("Animal		destructor called");
}

Animal	&Animal::operator=( const Animal &in )
{
	this->type = in.type;
	PRINT("Animal		operator= called");
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << this->type << "		" << "Animal makes no sound" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return this->type;
}

void	Animal::printIdeas( void ) const { }

void	Animal::setIdeas( int, std::string ) const { }