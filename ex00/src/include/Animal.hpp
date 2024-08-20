#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_

#include <iostream>

class Animal
{
public:
	Animal(void);
	~Animal(void);
	Animal(const Animal& obj);
	Animal& operator=(const Animal& obj);

protected:
	std::string type;
};

#endif //_ANIMAL_HPP_
