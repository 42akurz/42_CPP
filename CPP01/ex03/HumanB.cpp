#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	PRINT("HumanB constructor called");
}

HumanB::~HumanB( void )
{
	PRINT("HumanB destructor called");
}

void	HumanB::attack( void ) 
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}