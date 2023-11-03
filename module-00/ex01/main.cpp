#include "Contacts.hpp"
#include "PhoneBook.hpp"

static void	start_phone(PhoneBook *phone)
{
	std::string	command;

	while (1) {
		std::cout  << GRN << "Enter one of the following commands: ADD, SEARCH or EXIT." << CRESET << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			phone->add_contact();
		else if (command == "SEARCH")
			phone->search_contact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command!" << std::endl;
	}
}

int	main()
{
	PhoneBook	*phone = new PhoneBook;

	start_phone(phone);
	delete phone;
	return(0);
}
