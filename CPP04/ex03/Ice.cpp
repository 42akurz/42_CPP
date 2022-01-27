#include "Ice.hpp"

Ice::Ice( void )
{
	this->_type = "ice";
	PRINT("Ice		constructor called");
}

Ice::Ice( const Ice &in )
{
	this->_type = in._type;
	PRINT("Ice		copy constructor called");
}

Ice::~Ice( void )
{
	PRINT("Ice		destructor called");
}

Ice	&Ice::operator=( const Ice &in )
{
	this->_type = in._type;
	PRINT("Ice		operator= called");
	return *this;
}

AMateria*	Ice::clone( void ) const
{
	return new Ice(*this);
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}