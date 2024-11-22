/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:08:29 by moel-fat          #+#    #+#             */
/*   Updated: 2024/11/22 19:10:08 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <ostream>

int main( void )
{
	Point p1(7.0f, 7.0f);
	Point p2(11.0f, 1.0f);
	Point p3(2.0f, 2.0f);
	Point tofind(7.0f, 3.0f);
	if (bsp(p1, p2, p3, tofind) == true)
		std::cout << "True"<< std::endl;
	else
		std::cout << "False"<< std::endl;
}
