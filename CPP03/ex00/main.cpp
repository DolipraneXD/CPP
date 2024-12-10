/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:55:00 by moel-fat          #+#    #+#             */
/*   Updated: 2024/12/10 15:53:03 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    // Create a ClapTrap
    ClapTrap clap("Clap 1");

    // Test attack
    clap.attack("Target Dummy");

    // Test taking damage
    clap.takeDamage(5);
    clap.takeDamage(7); // Exceed hit points to test constraints

    // Test repair
    clap.beRepaired(4);
    clap.attack("Another Target"); // Test energy reduction
    clap.beRepaired(6); // Test repair with low energy

    return 0;
}

