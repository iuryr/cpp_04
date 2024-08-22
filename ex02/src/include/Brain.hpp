#ifndef _BRAIN_HPP
#define _BRAIN_HPP

#include <iostream>

#ifndef BRAIN_SIZE
#define BRAIN_SIZE 100
#endif //BRAIN_SIZE

class Brain
{
public:
	Brain(void);
	~Brain(void);
	Brain(const Brain& obj);
	Brain& operator=(const Brain& obj);

	std::string ideas[BRAIN_SIZE];
};

#endif //_BRAIN_HPP
