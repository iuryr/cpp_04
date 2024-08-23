#ifndef _AMATERIA_HPP
#define _AMATERIA_HPP

#include "ICharacter.hpp"

#include <iostream>

class AMateria
{
public:
	AMateria(void);
	virtual ~AMateria(void);
	AMateria(const AMateria& obj);
	AMateria& operator=(const AMateria& obj);

	AMateria(std::string const & type);

	std::string const & getType(void) const; //returns Materia type
	
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);

protected:
	std::string _type;
};

#endif //_AMATERIA_HPP
