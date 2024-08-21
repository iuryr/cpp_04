#ifndef _DOG_HPP
#define _DOG_HPP

#include <iostream>

#include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog(void);
	~Dog(void);
	Dog(const Dog& obj);
	Dog& operator=(const Dog& obj);

	void makeSound(void) const;
};

#endif //_DOG_HPP
