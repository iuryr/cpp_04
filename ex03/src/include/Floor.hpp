#ifndef _FLOOR_HPP_
#define _FLOOR_HPP_

#include "AMateria.hpp"

#define FLOOR_SIZE 100

class Floor
{
public:
	static Floor* instance;

	static Floor* getInstance(void);
	static void addMateria(AMateria* m);
	void destroyInstance(void);

private:
	Floor(void);
	Floor(const Floor& obj);
	Floor& operator=(const Floor& obj);
	~Floor(void);

	AMateria* _content[FLOOR_SIZE];
};

#endif //_FLOOR_HPP_
