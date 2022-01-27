#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main( void )
{
	/* SUBJECT MAIN */
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	system("leaks out");


	/* ADDITIONAL TESTS */
	// AMateria	*ice1 = new Ice();
	// AMateria	*ice2 = ice1->clone();
	// PRINT(ice1);
	// PRINT(ice2);

	// PRINT("");

	// AMateria	*cure1 = new Cure();
	// AMateria	*cure2 = cure1->clone();
	// PRINT(cure1);
	// PRINT(cure2);

	// PRINT("");

	// ICharacter	*bill = new Character("bill");
	// ICharacter	*joe = new Character("joe");
	// AMateria	*ice3 = new Ice();
	// bill->equip(ice1);
	// bill->equip(ice2);
	// bill->equip(cure1);
	// bill->equip(cure2);
	// bill->equip(ice3);
	// bill->unequip(0);
	// delete ice1;
	// bill->equip(ice3);
	// bill->use(0, *joe);
	// bill->use(3, *joe);
	// delete bill;
	// delete joe;

	// PRINT("");

	// Character	*john = new Character("john");
	// Character	*mike = new Character("mike");
	// *john = *mike;

	// PRINT(mike->getName());
	// PRINT(john->getName());

	// delete john;
	// delete mike;

	// PRINT("");

	// IMateriaSource	*src = new MateriaSource();
	// src->learnMateria(new Ice());
	// AMateria	*icee = src->createMateria("ice");
	// delete icee;
	// delete src;

	// PRINT("");

	// system("leaks out");

	return 0;
}