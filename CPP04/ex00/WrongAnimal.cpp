#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	this->type = "WrongAnimal";
	PRINT("WrongAnimal	constructor called");
}

WrongAnimal::WrongAnimal( const WrongAnimal &in )
{
	this->type = in.type;
	PRINT("WrongAnimal	copy constructor called");
}

WrongAnimal::~WrongAnimal( void )
{
	PRINT("WrongAnimal	destructor called");
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &in )
{
	this->type = in.type;
	PRINT("WrongAnimal	operator= called");
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << this->type << "	" << "Animal makes no sound" << std::endl;
}