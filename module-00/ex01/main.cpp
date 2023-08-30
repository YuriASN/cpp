#include "PhoneBook.hpp"
#include "Contacts.hpp"

void	set_data(Contacts list)
{
	std::string	tmp;

	std::cout << "Input the contact's first name: ";
	std::cin >> tmp;
	while (!list.set_first_name(tmp)) {
		std::cout << "No string found! Try again... " << std::endl << "Input the contact's first name: ";
		std::cin >> tmp;
	}
	std::cout << "Input the contact's last name: ";
	std::cin >> tmp;
	while (!list.set_last_name(tmp)) {
		std::cout << "No string found! Try again... " << std::endl << "Input the contact's last name: ";
		std::cin >> tmp;
	}
	std::cout << "Input the contact's phone number: ";
	std::cin >> tmp;
	while (!list.set_number(tmp)) {
		std::cout << "Invalid number! Try again... " << std::endl << "Input the contact's phone number: ";
		std::cin >> tmp;
	}
	std::cout << "Input the contact's darkest secret: ";
	std::cin >> tmp;
	while (!list.set_secret(tmp)) {
		std::cout << "No string found! Try again... " << std::endl << "Input the contact's darkest secret: ";
	std::cin >> tmp;
	}	
}

static void	add_contact(PhoneBook *phone)
{
	int			last = phone->last_contact;
	Contacts	*list = phone->contact;

	if (phone->last_contact == -1)
	{
		phone->last_contact++;
		set_data(list[0]);
	}
	else if (phone->last_contact == 8)
	{
		delete &list[0];
		list[0] = *new Contacts;
		set_data(list[0]);
		phone->last_contact = 0;
	}
	else if (&phone->contact[last + 1])
	{
		delete &list[last + 1];
		list[last + 1] = *new Contacts;
		set_data(list[last + 1]);
		phone->last_contact++;
	}
}

static void	search_contact(PhoneBook *phone)
{

}

static void	start_phone(PhoneBook *phone)
{
	std::string	command;

	while (1)
	{
		std::cout << "Enter one of the following commands: ADD, SEARCH or EXIT." << std::endl;
		std::cin >> command;
		if (command == "ADD")
			add_contact(phone);
		else if (command == "SEARCH")
			search_contact(phone);
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command!" << std::endl;
	}
}

int	main()
{
	PhoneBook	*phone = new PhoneBook();
	if (!phone)
		return (1);
	start_phone(phone);
	delete phone;

	return(0);
}
