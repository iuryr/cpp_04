#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(const AMateria& obj): _type(obj.getType())
{
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	if (this != &obj)
	{
		this->_type = obj.getType();
	}
	return *this;
}

std::string const & AMateria::getType(void) const
{
	return this->_type;
}
