#include "AMateria.hpp"

AMateria::AMateria( void )
{
	PRINT("AMateria	constructor called");
}

AMateria::AMateria( std::string const &type ) : _type(type)
{
	PRINT("AMateria	type constructor called");
}

AMateria::AMateria( const AMateria &in )
{
	PRINT("AMateria	copy constructor called");
	this->_type = in._type;
}

AMateria::~AMateria( void )
{
	PRINT("AMateria	destructor called");
}

AMateria	&AMateria::operator=( const AMateria &in )
{
	this->_type = in._type;
	PRINT("AMateria	operator= called");
	return *this;
}

std::string const & AMateria::getType( void ) const
{
	return this->_type;
}

void	AMateria::use( ICharacter& target ) { (void)target; }