#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("not set")	{
	std::cout << "WrongAnimal Class contructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& anim)	{
	std::cout << "WrongAnimal Class copy contructor called" << std::endl;
	if (this != &anim)	{
		this->type = anim.getType();
	}
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& anim)	{
	this->type = anim.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()	{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const	{
	std::cout << "Sound!? It's wrong and abstract!" << std::endl;
}

std::string WrongAnimal::getType() const	{
	return (this->type);
}