#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define INVENTORY_SIZE 4


class Character: public ICharacter
{
public:
	Character(void);
	~Character(void);
	Character(const Character& obj);
	Character& operator=(const Character& obj);

	Character(std::string name);

	std::string const & getName(void) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	std::string _name;
	AMateria* _inventory[4];
};

#endif //_CHARACTER_HPP
