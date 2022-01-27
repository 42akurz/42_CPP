#include "Character.hpp"

Character::Character( void )
{
	PRINT("Character	constructor called");

	for (size_t i = 0; i < sizeof(this->_materias)/sizeof(this->_materias[0]); i++)
		this->_materias[i] = nullptr;
}

Character::Character( std::string name ) : _name(name)
{
	PRINT("Character	name constructor called");

	for (size_t i = 0; i < sizeof(this->_materias)/sizeof(this->_materias[0]); i++)
		this->_materias[i] = nullptr;
}

Character::Character( const Character &in )
{
	PRINT("Character	copy constructor called");

	for (size_t i = 0; i < sizeof(this->_materias)/sizeof(this->_materias[0]); i++)
		if (in._materias[i] != nullptr)
			this->_materias[i] = in._materias[i]->clone();
}

Character::~Character( void )
{
	PRINT("Character	destructor called");

	for (size_t i = 0; i < sizeof(this->_materias)/sizeof(this->_materias[0]); i++)
		delete this->_materias[i];
}

Character	&Character::operator=( const Character &in )
{
	PRINT("Character	operator= called");
	
	for (size_t i = 0; i < sizeof(this->_materias)/sizeof(this->_materias[0]); i++)
	{
		delete this->_materias[i];
		if (in._materias[i] != nullptr)
			this->_materias[i] = in._materias[i]->clone();
	}
	return *this;
}

std::string const	&Character::getName( void ) const
{
	return this->_name;
}

void	Character::equip( AMateria* m )
{
	for (size_t i = 0; i < sizeof(this->_materias)/sizeof(this->_materias[0]); i++)
	{
		if (this->_materias[i] == nullptr)
		{
			// std::cout << this->getName() << "		equpis " << m->getType() << std::endl;
			this->_materias[i] = m;
			break ;
		}
	}
}

void	Character::unequip( int idx )
{
	if (idx >= 0 && idx <= 3 && this->_materias[idx] != nullptr)
	{
		// std::cout << this->getName() << "		unequpis " << this->_materias[idx]->getType() << std::endl;
		this->_materias[idx] = nullptr;
	}
}

void	Character::use( int idx, ICharacter& target )
{
	if (this->_materias[idx] != nullptr)
		this->_materias[idx]->use( target );
}