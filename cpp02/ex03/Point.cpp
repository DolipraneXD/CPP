/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:18:13 by moel-fat          #+#    #+#             */
/*   Updated: 2024/11/22 15:41:01 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): x(0), y(0)
{

}

Point::Point(const float fx, const float fy) : x(fx), y(fy)
{

}

Point::Point(const Point& var) : x(var.x), y(var.y)
{

}

Point &Point::operator=(const Point& var)
{
	return (*this);
}

Fixed Point::getX() const
{
	return (x);
}

Fixed Point::getY() const
{
	return (y);
}