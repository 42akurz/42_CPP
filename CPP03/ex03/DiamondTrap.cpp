#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	PRINT("Diamond Trap	default constructor");

	this->_name = "default";
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_demage = 30;
}

DiamondTrap::DiamondTrap( std::string name )
{
	PRINT("Diamond Trap	name constructor");

	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_demage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap &in )
{
	PRINT("Diamond Trap	copy constructor");

	this->_name = in._name;
}

DiamondTrap::~DiamondTrap( void )
{
	PRINT("Diamond Trap	destructor");
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &in )
{
	this->_name = in._name;

	return *this;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap	name: \"" << this->_name << "\". ClapTrap's name: \"" << this->ClapTrap::_name << "\"" << std::endl;
}

void	DiamondTrap::attack( std::string const &target ) const
{
	std::cout << "DiamondTrap	" << this->_name << " attacks " << target << ", causing " << this->_attack_demage << " points of damage!" << std::endl;
}