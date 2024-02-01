#include "Dog.hpp"

Dog::Dog() : Animal()	{
	this->type = "Dog";
	this->cerebro = new Brain();
	std::cout << "Dog Class contructed" << std::endl;
}


Dog::Dog(const Dog& dog) : Animal(dog)	{
	std::cout << "Dog Class copy contructor called" << std::endl;
	if (this != &dog)	{
		this->cerebro = dog.cerebro;
		this->type = dog.getType();
	}
}

Dog& Dog::operator= (const Dog& dog)	{
	this->type = dog.getType();
	this->cerebro = dog.cerebro;
	Animal::operator=(dog);
	return (*this);
}

Dog::~Dog()	{
	std::cout << "Dog destructor called" << std::endl;
	delete cerebro;
}

void Dog::makeSound() const	{
	std::cout << "Call type " << getType() << ": barks!" << std::endl;
}

std::string Dog::getType() const	{
	return (this->type);
}