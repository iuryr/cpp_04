#ifndef _WRONGCAT_HPP
#define _WRONGCAT_HPP

#include <iostream>

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat(void);
	~WrongCat(void);
	WrongCat(const WrongCat& obj);
	WrongCat& operator=(const WrongCat& obj);

	void makeSound(void) const;
};

#endif //_WRONGCAT_HPP_
