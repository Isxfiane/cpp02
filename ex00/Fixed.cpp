#include "Fixed.hpp"
#include <iostream>

const int Fixed::_dec = 8;

Fixed::Fixed() : _fix(0)
{
	std::cout << "DEFAULT CONSTRUCTOR CALL A ZEBI" << std::endl;
	return;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "COPY CONSTRUCTOR CALL A ZEBI" << std::endl;
	if (this == &src)
		return;

	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "DESTRUCTOR CALL A ZEBI (bye)" << std::endl;
	return;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "OPPERATOR = CALL A ZEBI (bye)" << std::endl;
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