#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Weapon manufactured." << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Weapon manufactured with type " << type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed!" << std::endl;
}

const std::string Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
	std::cout << "Weapon type changed to: " << newType << std::endl;
}