#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	PRINT("Weapon constructed");
}

Weapon::Weapon( void )
{
	PRINT("Weapon constructed");
}

Weapon::~Weapon( void )
{
	PRINT("Weapon destructed");
}

std::string const	&Weapon::getType( void )
{
	std::string const &typeRef = this->_type;

	return (typeRef);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}