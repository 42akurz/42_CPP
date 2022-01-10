#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "Zombie came to life!" << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " died" << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}