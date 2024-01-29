#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed (void) : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* Creates copy class from fixed */
Fixed::Fixed (const Fixed &fixed)
{
	this->fixedPoint = fixed.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed (const int nbr) : fixedPoint(nbr << fractBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed (const float nbr) : fixedPoint(roundf(nbr * (1 << fractBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed ()
{
	std::cout << "Destructor called" << std::endl;
}

/* If different, copy the fixed class attributes and return it self */
Fixed& Fixed::operator=(const Fixed &fixed)
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

/* Return float of fixed point */
float	Fixed::toFloat(void) const
{
	return (((float)this->fixedPoint) / (1 << this->fractBits));
}

/* Return int of fixed point */
int		Fixed::toInt(void) const
{
	return (this->fixedPoint >> this->fractBits);
}

/* Class to output stream */
std::ostream& operator<< (std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
