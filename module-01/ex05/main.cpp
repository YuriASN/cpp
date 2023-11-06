#include "Harl.hpp"

int	main(void)
{
	Harl	karen;
	std::string	input;

	while (input != "exit")
	{
		std::cout << "What Harl will do?" << std::endl;
		std::getline(std::cin, input);
		karen.complain(input);
	}
	return (0);
}
