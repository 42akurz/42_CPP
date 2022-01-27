#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	PRINT("");

	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;

	PRINT("");

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	PRINT("");

	delete meta;
	delete dog;
	delete cat;

	PRINT("");

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	PRINT("");

	wrong_cat->makeSound();
	wrong_meta->makeSound();

	PRINT("");

	delete wrong_meta;
	delete wrong_cat;

	return 0;
}