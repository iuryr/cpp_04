#ifndef _CURE_HPP_
#define _CURE_HPP_

#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure(void);
	~Cure(void);
	Cure(const Cure& obj);
	Cure& operator=(const Cure& obj);

	AMateria* clone(void) const;
	void use(ICharacter& target);
};

#endif //_CURE_HPP
