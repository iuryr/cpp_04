#include "Animal.hpp"
#include "qolMacros.hpp"

Animal::Animal(void) : _type("Animal")
{
	println("Animal constructor called.");
}

Animal::~Animal(void)
{
	println("Animal destructor called.");
}

Animal::Animal(const Animal& obj)
{
	println("Animal copy constructor called.");
	*this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

void Animal::makeSound(void) const
{
	println("Animal generic sound");
	return;
}
