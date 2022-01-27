#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	PRINT("WrongCat	constructor called");
}

WrongCat::WrongCat( const WrongCat &in )
{
	this->type = in.type;
	PRINT("WrongCat	copy constructor called");
}

WrongCat::~WrongCat( void )
{
	PRINT("WrongCat	destructor called");
}

WrongCat	&WrongCat::operator=( const WrongCat &in )
{
	this->type = in.type;
	PRINT("WrongCat	operator= called");
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << this->type << "	" << "Miau" << std::endl;
}