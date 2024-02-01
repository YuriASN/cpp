#include "Cat.hpp"

Cat::Cat() : Animal()	{
	this->type = "Cat";
	this->cerebro = new Brain();
	std::cout << "Cat Class contructed" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal()	{
	std::cout << "Cat Class copy contructor called" << std::endl;
	if (this != &cat)	{
		this->type = cat.getType();
		this->cerebro = cat.cerebro;
	}
}

Cat& Cat::operator= (const Cat& cat)	{
	this->type = cat.getType();
	this->cerebro = cat.cerebro;
	Animal::operator=(cat);
	return (*this);
}

Cat::~Cat()	{
	std::cout << "Cat destructor called" << std::endl;
	delete cerebro;
}

void Cat::makeSound() const	{
	std::cout << "Call type " << getType() << ": meows!" << std::endl;
}

std::string Cat::getType() const	{
	return (this->type);
}