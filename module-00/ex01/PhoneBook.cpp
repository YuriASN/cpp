#include "PhoneBook.hpp"
#include "Contacts.hpp"


/* Jumps last_contact to the next index. */
void	PhoneBook::next_contact()
{
	if (this->last_contact == 7)
		this->last_contact = 0;
	else
		this->last_contact++;
}

PhoneBook::PhoneBook(void)
{
	this->last_contact = -1;
	//std::cout << "New PhoneBook created!" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "Phonebook destroyed!" << std::endl;
	return;
}

/* Sees if next index is free or if client wants to erase it. */
void	PhoneBook::add_contact(void)
{
	std::string tmp;

	if ((this->last_contact < 7 && this->contact[this->last_contact + 1].is_saved() == true)
		|| this->last_contact == 7)
	{
		std::cout << "You already have 8 contacts. Do you want to replace the oldest with a new one? (Y/N)" << std::endl;
		std::getline(std::cin, tmp);
		if (tmp != "Y" && tmp != "y" && tmp != "yes" && tmp != "YES")
		{
			std::cout << "Can't add a contact with the list full!" << std::endl;
			return ;
		}
		if (this->last_contact == 7)
			this->contact[0].clean_contact();
		else
			this->contact[this->last_contact + 1].clean_contact();
	}
	next_contact();
	set_data(&this->contact[this->last_contact]);
}

void	PhoneBook::search_contact(void)
{
	int			index;
	std::string	input;

	if (this->last_contact == -1)
	{
		std::cout << "You have no contacts yet!" << std::endl;
		return;
	}
	print_all();
	std::cout << "Input the index of the contact you want to see: ";
	std::getline(std::cin, input);
	index = atoi(input.c_str());
	index--;
	if (index < 0 || index > 7 || this->contact[index].is_saved() == false)
	{
		std::cout << "Invalid index!" << std::endl;
		return;
	}
	print_one(index);
}

static void	print10(std::string str)
{
	int	len;
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9) << ".";
		return;
	}
	len = 10 - str.length();
	std::cout << str;
	for (int i = 0; i < len; i++)
		std::cout << " ";
}

void	PhoneBook::print_all(void)
{
	std::cout << BLU;
	print10("Index");
	std::cout << "|";
	print10("First Name");
	std::cout << "|";
	print10("Last Name");
	std::cout << "|";
	print10("Nickname");
	std::cout << CRESET << std::endl;
	for (int i = 0; i < 8 && this->contact[i].is_saved() == true; i++)
	{
		std::cout << i + 1 << "         |";
		this->contact[i].print_short();
	}
}

void	PhoneBook::print_one(int index)
{
	this->contact[index].print_full();
}