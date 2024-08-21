#include "Cat.hpp"
#include "qolMacros.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	println("Cat constructor called.");
}

Cat::~Cat(void)
{
	println("Cat destructor called.");
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	println("Cat copy constructor called.");
	*this = obj;
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
