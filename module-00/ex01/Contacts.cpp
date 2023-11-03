#include "Contacts.hpp"
#include "PhoneBook.hpp"


Contacts::Contacts(void)
{
	saved = false;
	//std::cout << "Contact created!" << std::endl;
}

Contacts::~Contacts()
{
	//std::cout << "Contact destroyed!" << std::endl;
	return;
}

void	Contacts::create(std::string first_n, std::string last_n, std::string nick, std::string nbr, std::string scrt)
{
	if (first_n.empty() || last_n.empty() || nick.empty() || nbr.empty() || scrt.empty()) {
		saved = false;
		std::cout << "Invalid contact! what the hell" << std::endl;
		return;
	}
	this->first_name = first_n;
	this->last_name = last_n;
	this->nickname = nick;
	this->phone_nbr = nbr;
	this->secret = scrt;
	this->saved = true;
}

void	Contacts::clean_contact()
{
	std::cout << "Cleaning contact..." << std::endl;
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_nbr = "";
	this->secret = "";
	this->saved = false;
	std::cout << std::endl;
}

/* Return if is saved or not. */
bool	Contacts::is_saved()
{
	return (this->saved);
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

/* Print data of a contact showing max of 10 chars per field, separating them with | */
void	Contacts::print_short()
{
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".";
	else
		print10(this->first_name);
	std::cout << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".";
	else
		print10(this->last_name);
	std::cout << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << "." << std::endl;
	else
		std::cout << this->nickname << std::endl;

}

/* Print full contact informations, one field per line. */
void	Contacts::print_full()
{
	std::cout << std::left << "First name:   " << this->first_name << std::endl;
	std::cout << std::left << "Last name:    " << this->last_name << std::endl;
	std::cout << std::left << "Nickname:     " << this->nickname << std::endl;
	std::cout<< "Phone number: " << this->phone_nbr << std::endl;
	std::cout << std::left << "Secret:       " << this->secret << std::endl;
}
