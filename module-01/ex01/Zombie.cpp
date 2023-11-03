#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << " came back to life!" << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << name << "A zombie came back to life!" << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << name << " is dead again!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << MAG << this->name << ": BraiiiiiiinnnzzzZ..." << CRESET << std::endl;
}

void	Zombie::setname(std::string name)
{
	this->name = name;
	std::cout << "A zombie was named " << name << "." << std::endl;
}