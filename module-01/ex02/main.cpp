#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string &ref = str;
	std::string *ptr = &str;

	std::cout << "Addresses of" << std::endl;
	std::cout << "str: " << &str << std::endl;
	std::cout << "ptr: " << &ptr << std::endl;
	std::cout << "ref: " << &ref << std::endl << std::endl;

	std::cout << "Values of" << std::endl;
	std::cout << "str: " << str << std::endl;
	std::cout << "ptr: " << *ptr << std::endl;
	std::cout << "ref: " << ref << std::endl;
	return (0);
}