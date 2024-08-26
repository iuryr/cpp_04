#include "Floor.hpp"
#include <cstddef>
#include <cstdlib>

#include "qolMacros.hpp"

Floor* Floor::instance = NULL;

Floor::Floor(void)
{
	for (int i = 0; i < FLOOR_SIZE; i++)
	{
		_content[i] = NULL;
	}
}

Floor::~Floor(void)
{
}

Floor::Floor(const Floor& obj)
{
	*this = obj;
}

Floor& Floor::operator=(const Floor& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
	return *this;
}

Floor* Floor::getInstance(void)
{
	if (Floor::instance == NULL)
	{
		instance = new Floor();
	}
	return instance;
}

void Floor::addMateria(AMateria* m)
{
	if (Floor::instance == NULL)
	{
		Floor::getInstance();
	}

	for (int i = 0; i < FLOOR_SIZE; i++)
	{
		if (Floor::getInstance()->_content[i] == NULL)
		{
			Floor::getInstance()->_content[i] = m;
			return;
		}
	}
	println("Floor size exceded. Crashing...");
	exit(1);
}

void Floor::destroyInstance(void)
{
	if (Floor::instance == NULL)
	{
		return;
	}

	for (int i = 0; i < FLOOR_SIZE; i++)
	{
		if (this->_content[i] != NULL)
		{
			delete this->_content[i];
		}
	}
	
	delete Floor::instance;
	Floor::instance = NULL;
}
