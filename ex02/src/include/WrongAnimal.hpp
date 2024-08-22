#ifndef _WRONGANIMAL_HPP_
#define _WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
	virtual ~WrongAnimal(void);
	WrongAnimal(const WrongAnimal& obj);
	WrongAnimal& operator=(const WrongAnimal& obj);

	void makeSound(void) const;

	std::string getType(void) const;

protected:
	std::string _type;
};

#endif //_WRONGANIMAL_HPP_
