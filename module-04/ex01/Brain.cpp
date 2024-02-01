#include "Brain.hpp"

Brain::Brain()	{
	std::cout << "Brain developed!" << std::endl;
}

Brain::Brain(const Brain& brain)	{
	if (this != &brain)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
}

Brain& Brain::operator= (const Brain& brain)	{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}

Brain::~Brain()	{
	std::cout << "Brain destroyed" << std::endl;
}
