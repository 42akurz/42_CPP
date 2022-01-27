#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("default"), _hitpoints(10), _energy_points(10), _attack_demage(0)
{
	PRINT("ClapTrap	default constructor");
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitpoints(10), _energy_points(10), _attack_demage(0)
{
	PRINT("ClapTrap	name constructor");
}

ClapTrap::ClapTrap( const ClapTrap &in )
{
	PRINT("ClapTrap	copy constructor");

	this->_name = in._name;
	this->_hitpoints = in._hitpoints;
	this->_energy_points = in._energy_points;
	this->_attack_demage = in._attack_demage;
}

ClapTrap::~ClapTrap( void )
{
	PRINT("ClapTrap	destructor");
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &in )
{
	PRINT("ClpaTrap	assignation operator");

	this->_name = in._name;
	this->_hitpoints = in._hitpoints;
	this->_energy_points = in._energy_points;
	this->_attack_demage = in._attack_demage;

	return *this;
}

void	ClapTrap::attack( std::string const &target ) const
{
	std::cout << "ClapTrap	" << this->_name << " attacks " << target << ", causing " << this->_attack_demage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	this->_hitpoints -= amount;

	if (this->_hitpoints < 0)
		this->_hitpoints = 0;

	std::cout << "ClapTrap	" << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_hitpoints += amount;

	if (this->_hitpoints > 10)
		this->_hitpoints = 10;

	std::cout << "ClapTrap	" << this->_name << " repairs " << amount << " hitpoints!" << std::endl;
}