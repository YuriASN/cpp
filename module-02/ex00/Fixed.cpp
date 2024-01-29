#include "Fixed.hpp"

Fixed::Fixed (void) : fixedPoint(8)
{
	this->fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

/* Creates copy class from fixed */
Fixed::Fixed (const Fixed &fixed) : fixedPoint(8)
{
	this->fixedPoint = fixed.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed ()
{
	std::cout << "Destructor called" << std::endl;
}

/* If different, copy the fixed class attributes and return it self */
Fixed &Fixed::operator=(const Fixed &fixed)
{
	if (this != &fixed)
	{
		this->fixedPoint = fixed.getRawBits();
	}	
	std::cout << "Copy assingment operator called" << std::endl;
	return (*this);
}

/* Return value of raw bits */
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called" << std::endl;
	return (this->fixedPoint);
}

/* raw to int */
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function called" << std::endl;
	this->fixedPoint = raw;
}
