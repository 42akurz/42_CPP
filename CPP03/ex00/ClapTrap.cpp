#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitpoints(10), _energy_points(10), _attack_demage(0)
{
	PRINT("default constructor called");
}

ClapTrap::ClapTrap( const ClapTrap &in )
{
	PRINT("copy constructor called");

	this->_name = in._name;
	this->_hitpoints = in._hitpoints;
	this->_energy_points = in._energy_points;
	this->_attack_demage = in._attack_demage;
}

ClapTrap::~ClapTrap( void )
{
	PRINT("destructor called");
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &in )
{
	PRINT("assignation operator called");

	this->_name = in._name;
	this->_hitpoints = in._hitpoints;
	this->_energy_points = in._energy_points;
	this->_attack_demage = in._attack_demage;

	return *this;
}

void	ClapTrap::attack( std::string const &target )
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_demage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	this->_hitpoints -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_hitpoints += amount;
	std::cout << "ClapTrap " << this->_name << " repairs " << amount << " hitpoints!" << std::endl;
}