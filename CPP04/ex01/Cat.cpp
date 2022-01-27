#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	this->brain = new Brain();
	PRINT("Cat		constructor called");
}

Cat::Cat( const Cat &in )
{
	this->type = in.type;
	this->brain = new Brain(*in.brain);
	PRINT("Cat		copy constructor called");
}

Cat::~Cat( void )
{
	delete this->brain;
	PRINT("Cat		destructor called");
}

Cat	&Cat::operator=( const Cat &in )
{
	this->type = in.type;
	delete this->brain;
	this->brain = new Brain(*in.brain);
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

void	Cat::printIdeas( void ) const
{
	for	(size_t i = 0; i < 100; i++)
	{
		if (!this->brain->ideas[i].empty())
			PRINT(this->brain->ideas[i]);
	}
}

void	Cat::setIdeas( int idx, std::string idea ) const
{
	this->brain->ideas[idx] = idea;
}