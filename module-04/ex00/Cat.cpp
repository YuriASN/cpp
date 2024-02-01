#include "Cat.hpp"

Cat::Cat() : Animal()	{
	this->type = "Cat";
	std::cout << "Cat Class contructed" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal()	{
	std::cout << "Cat Class copy contructor called" << std::endl;
	if (this != &cat)	{
		this->type = cat.getType();
	}
}

Cat& Cat::operator= (const Cat& cat)	{
	this->type = cat.getType();
	Animal::operator=(cat);
	return (*this);
}

Cat::~Cat()	{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const	{
	std::cout << "Call type " << getType() << ": meows!" << std::endl;
}

std::string Cat::getType() const	{
	return (this->type);
}