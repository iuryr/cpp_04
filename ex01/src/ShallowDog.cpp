#include "ShallowDog.hpp"
#include "Brain.hpp"
#include "qolMacros.hpp"

ShallowDog::ShallowDog(void)
{
	this->_type = "ShallowDog";
	this->_brainPointer = new Brain();
	for (int i = 0; i < BRAIN_SIZE; i++)
	{
		this->_brainPointer->ideas[i] = "It's a doggy dog world!";
	}
	println("ShallowDog constructor called.");
}

ShallowDog::~ShallowDog(void)
{
	delete this->_brainPointer;
	println("ShallowDog destructor called.");
}

ShallowDog::ShallowDog(const ShallowDog& obj) : Animal(obj)
{
	println("ShallowDog copy constructor called.");
	*this = obj;
}

ShallowDog& ShallowDog::operator=(const ShallowDog& obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

void ShallowDog::makeSound(void) const
{
	println("BARK! BARK!");
	return;
}

void ShallowDog::printFiveIdeas(void) const
{
	for (int i = 0; i < 5; i++)
	{
		println(this->_brainPointer->ideas[i]);
	}
}
