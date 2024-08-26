#include "Character.hpp"
#include "qolMacros.hpp"
#include "Floor.hpp"

Character::Character(void): _name("DefaultName")
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		_inventory[i] = NULL;
	}
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		_inventory[i] = NULL;
	}
}

Character::~Character(void)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
		}
	}
}

Character::Character(const Character& obj)
{
	this->_name = obj.getName();
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (obj._inventory[i] != NULL)
		{
			this->_inventory[i] = obj._inventory[i]->clone();
		}
		else
		{
			this->_inventory[i] = NULL;
		}
	}
}

Character& Character::operator=(const Character& obj)
{
	if (this != &obj)
	{
		this->_name = obj.getName();

		for (int i = 0; i < INVENTORY_SIZE; i++)
		{
			if (this->_inventory[i] != NULL)
			{
				delete this->_inventory[i];
			}

			if (obj._inventory[i] != NULL)
			{
				this->_inventory[i] = obj._inventory[i]->clone();
			}
			else
			{
				this->_inventory[i] = NULL;
			}
		}
	}

	return *this;
}

std::string const & Character::getName(void) const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			println(getName() << " equiped " << m->getType() << " in inventory slot " << i);
			return;
		}
	}
	delete m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= INVENTORY_SIZE)
	{
		return;
	}
	if (this->_inventory[idx] == NULL)
	{
		return;
	}
	Floor::addMateria(this->_inventory[idx]);
	println("Dropped " << this->_inventory[idx]->getType() << " materia on the floor.");
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= INVENTORY_SIZE)
	{
		return;
	}
	if (_inventory[idx] != NULL)
	{
		_inventory[idx]->use(target);
	}
}
