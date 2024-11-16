/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:32:54 by moel-fat          #+#    #+#             */
/*   Updated: 2024/11/16 15:30:58 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
	private:
		int Value;
		static const int fractionalbit = 8;
	public:
		Fixed();
		Fixed(const Fixed& var);
		Fixed& operator=(const Fixed& var);
		~Fixed();
		Fixed(int intVlaue);
		Fixed(float floatValue);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed);

#endif
