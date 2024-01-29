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

	bool operator> (const Fixed &fixed) const;
	bool operator< (const Fixed &fixed) const;
	bool operator>= (const Fixed &fixed) const;
	bool operator<= (const Fixed &fixed) const;
	bool operator== (const Fixed &fixed) const;
	bool operator!= (const Fixed &fixed) const;

	Fixed& operator= (const Fixed &fixed);
	Fixed operator+ (const Fixed &fixed);
	Fixed operator- (const Fixed &fixed);
	Fixed operator* (const Fixed &fixed);
	Fixed operator/ (const Fixed &fixed);

	Fixed& operator++ (void);
	Fixed& operator-- (void);
	Fixed operator++ (int);
	Fixed operator-- (int);

	int 		getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int			toInt(void) const;
	static Fixed&	min(Fixed &a, Fixed &b);
	static Fixed&	max(Fixed &a, Fixed &b);
	static const Fixed&	min(const Fixed &a, const Fixed &b);
	static const Fixed&	max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<< (std::ostream &stream, const Fixed &fixed);

#endif