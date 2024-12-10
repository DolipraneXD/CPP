/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:55:00 by moel-fat          #+#    #+#             */
/*   Updated: 2024/12/10 16:46:28 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    // Test construction
    ScavTrap scav1("Scavvy");

    // Test attack
    scav1.attack("Target Dummy");

    // Test taking damage
    scav1.takeDamage(30);
    scav1.takeDamage(80); // Should reduce hit points to 0

    // Test repair
    scav1.beRepaired(20); // Should not work because hit points are 0

    // Test guard gate mode
    scav1.guardGate();

    // Test copy constructor
    ScavTrap scav2 = scav1;

    // Test assignment operator
    ScavTrap scav3("Another Scav");
    scav3 = scav1;

    return 0;
}
