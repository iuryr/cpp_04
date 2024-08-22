#include "Brain.hpp"
#include "qolMacros.hpp"

Brain::Brain(void)
{
	println("Brain constructor called.");
}

Brain::~Brain(void)
{
	println("Brain destructor called.");
}

Brain::Brain(const Brain& obj)
{
	println("Brain copy constructor called.");
	*this = obj;
}

Brain& Brain::operator=(const Brain& obj)
{
	if (this != &obj)
	{
		for(int i = 0; i < BRAIN_SIZE; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
	return *this;
}
