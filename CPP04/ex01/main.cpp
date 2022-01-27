#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int	main( void )
{
	const Animal* animals[10];

	for (size_t i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			Animal *animal = new Dog();
			animals[i] = animal;
		}
		else
		{
			Animal *animal = new Cat();
			animals[i] = animal;
		}
	}

	PRINT("");

	animals[0]->makeSound();
	animals[9]->makeSound();

	PRINT("");

	// to prove deep copy
	Dog dog = Dog();
	dog.setIdeas(0, "great idea");
	Dog dogCopy = Dog(dog);
	PRINT("before:");
	dog.printIdeas();
	dogCopy.printIdeas();
	dog.setIdeas(0, "stupid idea");
	PRINT("after:");
	dog.printIdeas();
	dogCopy.printIdeas();

	PRINT("");

	for (size_t i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	
	return 0;
}