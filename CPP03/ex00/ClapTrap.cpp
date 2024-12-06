/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:52:36 by moel-fat          #+#    #+#             */
/*   Updated: 2024/12/06 11:26:14 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}
ClapTrap::ClapTrap(std::string var) : Name(var) , Hit(10), Energy(10), Attack(0)
{
	std::cout << Name << "Is Ready to To play " << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << Name << "Out for Good " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	
}
