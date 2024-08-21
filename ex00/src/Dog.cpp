#include "Dog.hpp"
#include "qolMacros.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	println("Dog constructor called.");
}

Dog::~Dog(void)
{
	println("Dog destructor called.");
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	println("Dog copy constructor called.");
	*this = obj;
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
