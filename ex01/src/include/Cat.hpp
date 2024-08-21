#ifndef _CAT_HPP
#define _CAT_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
public:
	Cat(void);
	~Cat(void);
	Cat(const Cat& obj);
	Cat& operator=(const Cat& obj);

	void makeSound(void) const;
	void printFiveIdeas(void) const;

private:
	Brain* _brainPointer;
};

#endif //_CAT_HPP
