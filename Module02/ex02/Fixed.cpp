#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->fixe1 = 0;
}

Fixed::Fixed(const Fixed &p)
{
	// std::cout << "Copy constructor called" << std::endl;
	fixe1 = p.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &p)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	fixe1 = p.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const fixe)
{
   // std::cout << "Int constructor called" << std::endl;
	this->fixe1 = fixe << bits1;
}

Fixed::Fixed(float const fixe)
{
	// std::cout << "Float constructor called" << std::endl;
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

bool	Fixed::operator>(Fixed p) const
{
	return (fixe1 > p.getRawBits());
}
bool	Fixed::operator<(Fixed p) const
{
	return (fixe1 < p.getRawBits());
}
bool	Fixed::operator>=(Fixed p) const
{
	return (fixe1 >= p.getRawBits());
}
bool	Fixed::operator<=(Fixed p) const
{
	return (fixe1 <= p.getRawBits());
}
bool	Fixed::operator==(Fixed p) const
{
	return (m_fixe == p.getRawBits());
}
bool	Fixed::operator!=(Fixed p) const
{
	return (m_fixe != p.getRawBits());
}
Fixed	Fixed::operator+(Fixed p) const
{
	return (toFloat() + p.toFloat());
}
Fixed	Fixed::operator-(Fixed p) const
{
	return (toFloat() - p.toFloat());
}
Fixed	Fixed::operator*(Fixed p) const
{
	return (toFloat() * p.toFloat());
}
Fixed	Fixed::operator/(Fixed p) const
{
	return (toFloat() / p.toFloat());
}
Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return (tmp);
}
Fixed	Fixed::operator++(void)
{
	fixe1++;
	return (*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;

	--*this;
	return (tmp);

}
Fixed	Fixed::operator--(void)
{
	fixe1--;
	return (*this);
}
Fixed	&Fixed::min(Fixed &n1, Fixed &n2)
{
	return ((n1 < n2) ? n1 : n2);
}
const Fixed	&Fixed::min(const Fixed &n1, const Fixed &n2){
	return ((n1 < n2) ? n1 : n2);
}
Fixed	&Fixed::max(Fixed &n1, Fixed &n2)
{
	return ((n1 > n2) ? n1 : n2);
}
const Fixed	&Fixed::max(const Fixed &n1, const Fixed &n2)
{
	return ((n1 > n2) ? n1 : n2);
}

std::ostream &operator<<(std::ostream &os, Fixed const &obj)
{
	return (os << obj.toFloat());
}
