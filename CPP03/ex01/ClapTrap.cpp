/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:52:36 by moel-fat          #+#    #+#             */
/*   Updated: 2024/12/07 15:03:24 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{

}
ClapTrap::ClapTrap(const ClapTrap& var): Name(var.Name), Hit(var.Hit), Energy(var.Energy), Attack(var.Attack)
{
	std::cout << Name << "has been Copied" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& var)
{
	if (this == &var)
		return (*this);
	Name = var.Name;
	Hit = var.Hit;
	Energy = var.Energy;
	Attack = var.Attack;
	std::cout << Name << " has been assigned!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name << " Out for Good " << std::endl;
}
ClapTrap::ClapTrap(std::string var) : Name(var) , Hit(10), Energy(10), Attack(0)
{
	std::cout << "ClapTrap " << Name << " Is Ready to To play " << std::endl;
}


void ClapTrap::attack(const std::string& target)
{
	if (Hit <= 0 || Energy <= 0)
	{
		std::cout << Name << " cannot attack. No hit points or energy left!" << std::endl;
		return ;
	}
	Energy--;
	std::cout << Name << "Attacks " << target << ", cuasing " << Attack << " point of Damage" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit <= 0)
	{
		std::cout << "No hitpoint for ClapTrap " << Name << " To attack with" << std::endl;
		return ;
	}
	Hit -= amount;
	if (Hit < 0)
		Hit = 0;
	std::cout << "ClapTrap " << Name << " take " << amount << " point of Damage! Hit point now: " << Hit << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Energy <= 0 || Hit <= 0)
	{
		std::cout << "ClapTrap " << Name << " Cannot repair. No hit point or energy left! " << std::endl;
		return ;
	}
	Energy--;
	Hit += amount;
	std::cout << "ClapTrap " << Name << " Repairs " << amount << " Point! Hit points now is : " << Hit << std::endl;
}

