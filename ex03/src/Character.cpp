#include "Character.hpp"

Character::Character(void): _name("DefaultName")
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
	//todo
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		_inventory[i] = NULL;
	}
}
