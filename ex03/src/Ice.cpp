#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(void): AMateria()
{
	this->_type = "ice";
}

Ice::~Ice(void)
{
}

Ice::Ice(const Ice& obj)
{
	*this = obj;
}

Ice& Ice::operator=(const Ice& obj)
{
	if (this != &obj)
	{
		this->_type = obj.getType();
	}
	return *this;
}

AMateria* Ice::clone(void) const
{
	AMateria* materia_ptr;

	materia_ptr = new Ice;
	return materia_ptr;
}

void Ice::use(ICharacter& target)
{
	//TODO
}
