#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
	std::cout << name << " was born." << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Human A died" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << "\e[0;32m";
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	std::cout << "\e[0m";
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	std::cout << this->name << " set " << this->weapon->getType() << "as his weapon." << std::endl;
}