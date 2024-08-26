#include "MateriaSource.hpp"
#include "qolMacros.hpp"
#include <cstdlib>

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < MSIZE; i++)
	{
		this->_materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < MSIZE; i++)
	{
		if (this->_materias[i] != NULL)
		{
			delete this->_materias[i];
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	*this = obj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < MSIZE; i++)
		{
			if (this->_materias[i] != NULL)
			{
				delete this->_materias[i];
			}

			this->_materias[i] = obj._materias[i]->clone();
		}
	}
	
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < MSIZE; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m;
			return;
		}
	}

	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MSIZE; i++)
	{
		if (this->_materias[i]->getType() == type)
		{
			return this->_materias[i]->clone();
		}
	}
	return NULL;

}
