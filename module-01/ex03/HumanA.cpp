#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
	std::cout << name << " was born." << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Human A died" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << "\e[0;32m";
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	std::cout << "\e[0;0m";
}
