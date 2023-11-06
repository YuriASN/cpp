#include "Harl.hpp"

int	main(void)
{
	Harl	karen;
	std::string	input;

	std::cout << "Time for harl to debug..." << std::endl;
	karen.complain("debug");

	std::cout << "Time for harl to give info..." << std::endl;
	karen.complain("info");

	std::cout << "Time for harl to give an warning..." << std::endl;
	karen.complain("warning");
	
	std::cout << "Time for harl to give an error..." << std::endl;
	karen.complain("error");
	return (0);
}
