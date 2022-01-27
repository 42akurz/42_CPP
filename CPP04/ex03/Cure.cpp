#include "Cure.hpp"

Cure::Cure( void )
{
	this->_type = "cure";
	PRINT("Cure		constructor called");
}

Cure::Cure( const Cure &in )
{
	this->_type = in._type;
	PRINT("Cure		copy constructor called");
}

Cure::~Cure( void )
{
	PRINT("Cure		destructor called");
}

Cure	&Cure::operator=( const Cure &in )
{
	this->_type = in._type;
	PRINT("Cure		operator= called");
	return *this;
}

AMateria*	Cure::clone( void ) const
{
	return new Cure(*this);
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}