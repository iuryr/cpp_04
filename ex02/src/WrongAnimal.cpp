#include "WrongAnimal.hpp"
#include "qolMacros.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	println("WrongAnimal constructor called.");
}

WrongAnimal::~WrongAnimal(void)
{
	println("WrongAnimal destructor called.");
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	println("WrongAnimal copy constructor called.");
	*this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}

void WrongAnimal::makeSound(void) const
{
	println("WrongAnimal generic sound");
	return;
}
