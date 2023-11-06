#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl entered the store!" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl left the place!" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	lines[4] = {"debug", "info", "warning", "error"};
	int			i = -1;

	while (++i < 4)
		if (lines[i] == level)
			break ;
	switch (i)
	{
		case 0:
			this->debug();
			break ;
		case 1:
			this->info();
			break ;
		case 2:
			this->warning();
			break ;
		case 3:
			this->error();
	}
}
