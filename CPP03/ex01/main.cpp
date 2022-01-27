#include "ScavTrap.hpp"

int	main( void )
{
	// ClapTrap	bill("bill");
	// ClapTrap	joe("joe");
	// ClapTrap	mihai("mihai");

	// PRINT("");

	// bill.attack("joe");
	// joe.beRepaired(10);
	// mihai.takeDamage(100);

	// PRINT("");

	ScavTrap	tom("tom");

	tom.attack( "will" );
	tom.guardGate();

	PRINT("");
	
	return 0;
}