#ifndef _MATERIASOURCE_HPP_
#define _MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define MSIZE 4 

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource(void);
	~MateriaSource(void);
	MateriaSource(const MateriaSource& obj);
	MateriaSource& operator=(const MateriaSource &obj);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);

private:
	AMateria* _materias[MSIZE];
};

#endif //_MATERIASOURCE_HPP_
