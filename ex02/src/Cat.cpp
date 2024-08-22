#include "Cat.hpp"
#include "Brain.hpp"
#include "qolMacros.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	this->_brainPointer = new Brain();
	for (int i = 0; i < BRAIN_SIZE; i++)
	{
		this->_brainPointer->ideas[i] = "Why are dogs so dumb?";
	}
	println("Cat constructor called.");
}

Cat::~Cat(void)
{
	delete this->_brainPointer;
	println("Cat destructor called.");
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	println("Cat copy constructor called.");
	this->_type = "Cat";
	this->_brainPointer = new Brain();
	for (int i = 0; i < BRAIN_SIZE; i++)
	{
		this->_brainPointer->ideas[i] = obj._brainPointer->ideas[i];
	}
}

Cat& Cat::operator=(const Cat& obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

void Cat::makeSound(void) const
{
	println("MEOW! MEOW!");
	return;
}

void Cat::printFiveIdeas(void) const
{
	for (int i = 0; i < 5; i++)
	{
		println(this->_brainPointer->ideas[i]);
	}
}
