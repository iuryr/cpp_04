#ifndef _ICE_HPP_
#define _ICE_HPP_

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice(void);
	~Ice(void);
	Ice(const Ice& obj);
	Ice& operator=(const Ice& obj);

	AMateria* clone(void) const;
	void use(ICharacter& target);
};

#endif //_ICE_HPP
