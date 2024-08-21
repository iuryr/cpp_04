#include "WrongCat.hpp"
#include "qolMacros.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	println("WrongCat constructor called.");
}

WrongCat::~WrongCat(void)
{
	println("WrongCat destructor called.");
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	println("WrongCat copy constructor called.");
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

void WrongCat::makeSound(void) const
{
	println("WrongCat MEEEEEOOOWWWS");
	return;
}
