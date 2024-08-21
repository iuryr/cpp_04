#ifndef _DOG_HPP
#define _DOG_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
public:
	Dog(void);
	~Dog(void);
	Dog(const Dog& obj);
	Dog& operator=(const Dog& obj);

	void makeSound(void) const;
	void printFiveIdeas(void) const;

private:
	Brain* _brainPointer;
};

#endif //_DOG_HPP
