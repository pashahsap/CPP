#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:

	int fixe1;
	static int const bits1 = 8;

	public:

	Fixed();
	~Fixed();
	Fixed(const Fixed &p);
	Fixed & operator = (const Fixed &p);
	int	getRawBits(void) const;
	void	setRawBits(int const raw)
};

#endif
