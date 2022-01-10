#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name)
{
	std::cout << this->_name << "	came to live" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << "	died" << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << "<" << this->_name << ">	BraiiiiiiinnnzzzZ..." << std::endl;
}