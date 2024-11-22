/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:17:11 by moel-fat          #+#    #+#             */
/*   Updated: 2024/11/21 15:39:18 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : Value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& var)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = var;
}

Fixed& Fixed::operator=(const Fixed& var)
{
	// std::cout<< "Copy assignment operator calle" << std::endl;
	if (this != &var)
		this->Value = var.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->Value;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->Value = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed)
{
	out << Fixed.toFloat();
	return out;
}

Fixed::Fixed(int intVlaue)
{
	// std::cout << "Int constructor called" << std::endl;
	this->Value = intVlaue << fractionalbit;
}

Fixed::Fixed(float floatValue)
{
	// std::cout << "Float constructor called" << std::endl;
	this->Value = static_cast<int>(roundf(floatValue * (1 << fractionalbit)));
}

int Fixed::toInt() const
{
	return (this->Value >> fractionalbit);
}

float Fixed::toFloat() const
{
	return (static_cast<float>(this->Value) / (1 << fractionalbit));
}
// first part
bool Fixed::operator > (const Fixed &var) const
{
	return (this->Value > var.Value);
}

bool Fixed::operator < (const Fixed &var) const
{
	return (this->Value < var.Value);
}

bool Fixed::operator >= (const Fixed &var) const
{
	return (this->Value >= var.Value);
}

bool Fixed::operator <= (const Fixed &var) const
{
	return (this->Value <= var.Value);
}

bool Fixed::operator == (const Fixed &var) const
{
	return (this->Value == var.Value);
}

bool Fixed::operator != (const Fixed &var) const
{
	return (this->Value != var.Value);
}

//second part

Fixed Fixed::operator + (const Fixed &var) const
{
	Fixed n;
	n.setRawBits(Value + var.getRawBits());
	return (n);
}

Fixed Fixed::operator - (const Fixed &var) const
{
	Fixed n;
	n.setRawBits(Value - var.getRawBits());
	return (n);
}
Fixed Fixed::operator * (const Fixed &var) const
{
	Fixed n;
	n.setRawBits(Value * var.getRawBits());
	return (n);
}
Fixed Fixed::operator / (const Fixed &var) const
{
	Fixed n;
	if(var.Value == 0)
	{
		std::cerr << "Error: Division by zero" << std::endl;
		return Fixed(0);
	}
	n.setRawBits(Value / var.getRawBits());
	return (n);
}

//three part

Fixed Fixed::operator ++ ()
{
	this->Value++;
	return *this;
}

Fixed Fixed::operator ++ (int)
{
	Fixed tmp = *this;
	++(*this);
	return tmp;
}

Fixed Fixed::operator -- ()
{
	this->Value--;
	return *this;
}

Fixed Fixed::operator -- (int)
{
	Fixed tmp = *this;
	--(*this);
	return tmp;
}

//four part

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return ((a <= b) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return ((a <= b) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return ((a >= b) ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return ((a >= b) ? a : b);
}
