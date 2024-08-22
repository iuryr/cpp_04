#include "Dog.hpp"
#include "Brain.hpp"
#include "qolMacros.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	this->_brainPointer = new Brain();
	for (int i = 0; i < BRAIN_SIZE; i++)
	{
		this->_brainPointer->ideas[i] = "It's a doggy dog world!";
	}
	println("Dog constructor called.");
}

Dog::~Dog(void)
{
	delete this->_brainPointer;
	println("Dog destructor called.");
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	println("Dog copy constructor called.");
	this->_type = obj._type;
	this->_brainPointer = new Brain();
	for (int i = 0; i < BRAIN_SIZE; i++)
	{
		this->_brainPointer->ideas[i] = obj._brainPointer->ideas[i];
	}
}

Dog& Dog::operator=(const Dog& obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

void Dog::makeSound(void) const
{
	println("BARK! BARK!");
	return;
}

void Dog::printFiveIdeas(void) const
{
	for (int i = 0; i < 5; i++)
	{
		println(this->_brainPointer->ideas[i]);
	}
}
