#ifndef _SHALLOWDOG_HPP
#define _SHALLOWDOG_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class ShallowDog: public Animal
{
public:
	ShallowDog(void);
	~ShallowDog(void);
	ShallowDog(const ShallowDog& obj);
	ShallowDog& operator=(const ShallowDog& obj);

	void makeSound(void) const;
	void printFiveIdeas(void) const;

private:
	Brain* _brainPointer;
};

#endif //_SHALLOWDOG_HPP
