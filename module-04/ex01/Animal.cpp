#include "Animal.hpp"

Animal::Animal() : type("not set")	{
	std::cout << "Animal Class contructed" << std::endl;
}

Animal::Animal(const Animal& anim)	{
	std::cout << "Animal Class copy contructor called" << std::endl;
	if (this != &anim)	{
		this->type = anim.getType();
	}
}

Animal& Animal::operator= (const Animal& anim)	{
	this->type = anim.getType();
	return (*this);
}

Animal::~Animal()	{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const	{
	std::cout << "Sound? No derived class attributed!" << std::endl;
}

std::string Animal::getType() const	{
	return (this->type);
}