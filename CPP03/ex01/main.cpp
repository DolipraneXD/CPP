/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:55:00 by moel-fat          #+#    #+#             */
/*   Updated: 2024/12/07 15:04:40 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    // // Create a ClapTrap instance
    // ClapTrap clap("Clappy");

    // // Test attack function
    // clap.attack("Target A");

    // // Test take damage function
    // clap.takeDamage(5);

    // // Test repair function
    // clap.beRepaired(3);

    // // Test edge cases
    // clap.takeDamage(20); // Should result in 0 hit points
    // clap.attack("Target B"); // Should fail due to 0 hit points
    // clap.beRepaired(5); // Should fail due to 0 energy points

        // Create a ClapTrap instance
    ClapTrap clap1("Clappy");

    // Test copy constructor
    ClapTrap clap2(clap1); // ClapTrap "Clappy" will be copied into clap2

    // Test copy assignment operator
    ClapTrap clap3("AnotherClap");
    clap3 = clap1; // ClapTrap "Clappy" will be assigned to clap3

    // Perform actions to verify the objects are independent
    clap2.attack("Target A");
    clap3.takeDamage(5);

    return 0;
}
