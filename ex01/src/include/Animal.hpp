#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_

#include <iostream>

class Animal
{
public:
	Animal(void);
	virtual ~Animal(void);
	Animal(const Animal& obj);
	Animal& operator=(const Animal& obj);

	virtual void makeSound(void) const;

	std::string getType(void) const;

protected:
	std::string _type;
};

#endif //_ANIMAL_HPP_
