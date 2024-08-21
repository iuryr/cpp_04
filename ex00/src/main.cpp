#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "qolMacros.hpp"

int main(void)
{
	const Animal* animal = new Animal;
	const Animal* dog = new Dog;
	const Animal* cat = new Cat;

	println(animal->getType());
	animal->makeSound();
	println(dog->getType());
	dog->makeSound();
	println(cat->getType());
	cat->makeSound();

	delete dog;
	delete cat;
	delete animal;

	println("");
	println("#### Wrong Behavior####");
	const WrongAnimal* wrong_animal = new WrongAnimal;
	const WrongAnimal* wrong_cat = new WrongCat;

	println(wrong_animal->getType());
	wrong_animal->makeSound();
	println(wrong_cat->getType());
	wrong_cat->makeSound();

	delete wrong_cat;
	delete wrong_animal;
}
