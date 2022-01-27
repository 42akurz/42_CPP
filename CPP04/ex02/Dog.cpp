#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	this->brain = new Brain();
	PRINT("Dog		constructor called");
}

Dog::Dog( const Dog &in )
{
	this->type = in.type;
	this->brain = new Brain(*in.brain);
	PRINT("Dog		copy constructor called");
}

Dog::~Dog( void )
{
	delete this->brain;
	PRINT("Dog		destructor called");
}

Dog	&Dog::operator=( const Dog &in )
{
	this->type = in.type;
	delete this->brain;
	this->brain = new Brain(*in.brain);
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

void	Dog::printIdeas( void ) const
{
	for	(size_t i = 0; i < 100; i++)
	{
		if (!this->brain->ideas[i].empty())
			PRINT(this->brain->ideas[i]);
	}
}

void	Dog::setIdeas( int idx, std::string idea ) const
{
	this->brain->ideas[idx] = idea;
}