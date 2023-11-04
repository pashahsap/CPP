#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixe1 = 0; 
}

Fixed::Fixed(const Fixed &p)
{
	std::cout << "Copy constructor called" << std::endl;
	fixe1 = p.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &p)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixe1 = p.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const fixe)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixe1 = fixe << bits1;
}

Fixed::Fixed(float const fixe)
{
	std::cout << "Float constructor called" << std::endl;
	float pre = 1 << bits1;
	this->fixe1 = roundf(fixe * pre);
}

int Fixed::getRawBits(void) const
{
	return(fixe1);
}

void Fixed::setRawBits(int const raw)
{
	fixe1 = raw;
}

int Fixed::toInt(void) const
{
	return (fixe1 >> bits1);
}

float Fixed::toFloat(void) const
{
	float prec = 1 << bits1;
	float nb;
	nb = (float)fixe1 / prec;
	return (nb);
}

std::ostream &operator<<(std::ostream &os, Fixed const &obj)
{
	return (os << obj.toFloat());
}
