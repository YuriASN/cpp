#include "PhoneBook.hpp"
#include "Contacts.hpp"

PhoneBook::PhoneBook(void)
{
	this->last_contact = -1;
	std::cout << "Constructor of Phone Book called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	for (int i = 0; i < 8; i++)
		if (&contact[i])
			delete &contact[i];
	std::cout << "Destructor of Phonebook called" << std::endl;
	return;
}
