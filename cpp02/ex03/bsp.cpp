/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:42:17 by moel-fat          #+#    #+#             */
/*   Updated: 2024/11/22 18:32:38 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include "Point.hpp"

// Helper to calculate the area of a triangle using vertices
// Fixed calculateArea(Point const& p1, Point const& p2, Point const& p3)
// {
//     return Fixed(0.5f) * (p1.getX() * (p2.getY() - p3.getY()) +p2.getX() * (p3.getY() - p1.getY()) +p3.getX() * (p1.getY() - p2.getY()));
// }


Fixed calculate(Point const &a, Point const &b, Point const &c)
{
	Fixed tmp = Fixed(0.5f) * (a.getX() * (b.getY() - c.getY()) + b.getX()*(c.getY()-a.getY()) + c.getX() * (a.getY() - b.getY()));
	return tmp;
}

bool bsp(const Point a, const Point b, const Point c, const Point tofind)
{

}
