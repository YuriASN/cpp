#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int	fixedPoint;
	static const int	fractBits = 8;

public:
	Fixed ();
	Fixed (const int nbr);
	Fixed (const float nbr);
	Fixed (const Fixed &fixed);
	~Fixed ();
	Fixed& operator= (const Fixed &fixed);

	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<< (std::ostream &stream, Fixed const &fixed);

#endif