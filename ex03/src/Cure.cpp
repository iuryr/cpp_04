#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(void): AMateria()
{
	this->_type = "cure";
}

Cure::~Cure(void)
{
}

Cure::Cure(const Cure& obj)
{
	*this = obj;
}

Cure& Cure::operator=(const Cure& obj)
{
	if (this != &obj)
	{
		this->_type = obj.getType();
	}
	return *this;
}

AMateria* Cure::clone(void) const
{
	AMateria* materia_ptr;

	materia_ptr = new Cure;
	return materia_ptr;
}

void Cure::use(ICharacter& target)
{
	//TODO
}
