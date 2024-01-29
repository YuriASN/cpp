#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int	fixedPoint;
	static const int	fractBits;

public:
	Fixed ();
	Fixed (const Fixed &fixed);
	~Fixed ();
	Fixed& operator= (const Fixed &fixed);

	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif