#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "ShallowDog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "qolMacros.hpp"

int main(void)
{
	Animal* animalArray[4];

	println("### Construction chain");
	for (int i = 0; i < 2; i++)
	{
		animalArray[i] = new Dog;
	}
	for (int i = 2; i < 4; i++)
	{
		animalArray[i] = new Cat;
	}

	println("\nHalf cats, half dogs");
	for (int i = 0; i < 4; i++)
	{
		animalArray[i]->makeSound();
	}

	println("\n### Destruction chain");
	for (int i = 0; i < 4; i++)
	{
		delete animalArray[i];
	}

	println("\n###Deep copies");
	println("Generating copy source");
	Dog* dog1 = new Dog;
	println("Copy Construction");
	Dog dog2(*dog1);
	println("Deleting copy source");
	delete dog1;
	println("Copy constructed still has access to its own brain");
	dog2.printFiveIdeas();

	//uncomment below to segfault
	// println("###Shallow Copie example");
	// println("Generating copy source");
	// ShallowDog* badDog1 = new ShallowDog;
	// println("Copy Construction");
	// ShallowDog badDog2(*badDog1);
	// println("Deleting copy source");
	// delete badDog1;
	// println("Copy constructed does not have access to is brain, since it was deleted above");
	// dog2.printFiveIdeas();
	
	//uncomment below to se error (can't instantiate abstract class)
	// Animal animal;
}
