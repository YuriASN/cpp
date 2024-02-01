#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()	{
	this->type = "WrongCat";
	std::cout << "WrongCat Class contructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& Wrongcat) : WrongAnimal()	{
	std::cout << "WrongCat Class copy contructor called" << std::endl;
	if (this != &Wrongcat)	{
		this->type = Wrongcat.getType();
	}
}

WrongCat& WrongCat::operator= (const WrongCat& Wrongcat)	{
	this->type = Wrongcat.getType();
	WrongAnimal::operator=(Wrongcat);
	return (*this);
}

WrongCat::~WrongCat()	{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const	{
	std::cout << "Call type " << getType() << ": Brap brap brap..." << std::endl;
}

std::string WrongCat::getType() const	{
	return (this->type);
}