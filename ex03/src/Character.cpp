#include "Character.hpp"
#include "qolMacros.hpp"

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
	*this = obj;
}

Character& Character::operator=(const Character& obj)
{
	if (this != & obj)
	{
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
