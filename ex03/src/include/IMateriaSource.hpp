#ifndef _IMATERIASOURCE_HPP_
#define _IMATERIASOURCE_HPP_

#include <iostream>

class AMateria;

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {};
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //_IMATERIASOURCE_HPP_
