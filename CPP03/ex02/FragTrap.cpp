#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	PRINT("FragTrap	default constructor");

	this->_name = "default";
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_demage = 30;
}

FragTrap::FragTrap( std::string name )
{
	PRINT("FragTrap	name constructor");

	this->_name = name;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_demage = 30;
}

FragTrap::FragTrap( const FragTrap &in )
{
	PRINT("FragTrap	copy constructor");

	this->_name = in._name;
	this->_hitpoints = in._hitpoints;
	this->_energy_points = in._energy_points;
	this->_attack_demage = in._attack_demage;
}

FragTrap::~FragTrap( void )
{
	PRINT("FragTrap	destructor");
}

FragTrap	&FragTrap::operator=( const FragTrap &in )
{
	PRINT("FragTrap	assignation operator");

	this->_name = in._name;
	this->_hitpoints = in._hitpoints;
	this->_energy_points = in._energy_points;
	this->_attack_demage = in._attack_demage;

	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap	" << this->_name << " makes a positive high fives request" << std::endl;
}