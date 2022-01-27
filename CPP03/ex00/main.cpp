#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	bill("bill");
	ClapTrap	joe("joe");
	ClapTrap	mihai("mihai");

	PRINT("");

	bill.attack("joe");
	joe.beRepaired(10);
	mihai.takeDamage(100);

	PRINT("");

	return 0;
}