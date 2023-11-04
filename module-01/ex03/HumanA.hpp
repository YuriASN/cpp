#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;
public:
	void	attack();

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
};

#endif