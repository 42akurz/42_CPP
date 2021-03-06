#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main( void )
{
	Weapon	knife = Weapon("crude spiked knife");

	HumanA	Pavel("Pavel", knife);
	Pavel.attack();
	knife.setType("some other type of knife");
	Pavel.attack();

	PRINT("");

	Weapon	club = Weapon("crude spiked club");

	HumanB	Razaq("Razaq");
	Razaq.setWeapon(club);
	Razaq.attack();
	club.setType("some other type of club");
	Razaq.attack();

	PRINT("");

	return 0;
}