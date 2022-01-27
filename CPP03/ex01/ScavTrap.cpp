#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	PRINT("ScavTrap	default constructor");

	this->_name = "default";
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_demage = 20;
}

ScavTrap::ScavTrap( std::string name )
{
	PRINT("ScavTrap	name constructor");

	this->_name = name;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_demage = 20;
}

ScavTrap::~ScavTrap( void )
{
	PRINT("ScavTrap	destructor");
}

ScavTrap::ScavTrap( const ScavTrap &in )
{
	PRINT("ScavTrap	copy constructor");

	this->_name = in._name;
	this->_hitpoints = in._hitpoints;
	this->_energy_points = in._energy_points;
	this->_attack_demage = in._attack_demage;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &in )
{
	PRINT("ScavTrap	assignment operator");

	this->_name = in._name;
	this->_hitpoints = in._hitpoints;
	this->_energy_points = in._energy_points;
	this->_attack_demage = in._attack_demage;

	return *this;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap	" << this->_name << " has entered in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack( std::string const &target ) const
{
	std::cout << "ScavTrap	" << this->_name << " attacks " << target << ", causing " << this->_attack_demage << " points of damage!" << std::endl;
}