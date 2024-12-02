#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_dec = 8;

Fixed::Fixed() : _fix(0)
{
	std::cout << "[Call] Constructor" << std::endl;
	return;
}

Fixed::Fixed(const float nb)
{
	std::cout << "[Call] Float constructor" << std::endl;
	this->_fix = roundf(nb * (1 << this->_dec));
	return ;
}

Fixed::Fixed(const int nb)
{
	std::cout << "[Call] Int constructor" << std::endl;
	this->_fix = nb << this->_dec;
	return ;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "[Call] Copy constructor" << std::endl;
	if (this == &src)
		return;

	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "[Call] Destructor" << std::endl;
	return;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "[Call] Operator '='" << std::endl;
	this->_fix = rhs._fix;

	return(*this);
}

int Fixed::getRawBits(void)
{
	return (this->_fix);
}

void Fixed::setRawBits(int const raw)
{
	this->_fix = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)(this->_fix) / (float)(1 << this->_dec));
}

int Fixed::toInt(void) const
{
	return (this->_fix >> this->_dec);
}

std::ostream&	operator<<(std::ostream& out, Fixed const& rhs)
{
	out << rhs.toFloat();
	return (out);
}
