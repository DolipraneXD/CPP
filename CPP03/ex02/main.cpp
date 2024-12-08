/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:55:00 by moel-fat          #+#    #+#             */
/*   Updated: 2024/12/08 18:31:16 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main()
{
    // Test default constructor
    std::cout << "Creating FragTrap with default constructor:" << std::endl;
    FragTrap defaultFrag;
    std::cout << std::endl;

    // Test parameterized constructor
    std::cout << "Creating FragTrap with name:" << std::endl;
    FragTrap namedFrag("Clappy");
    std::cout << std::endl;

    // Test copy constructor
    std::cout << "Creating FragTrap by copying another:" << std::endl;
    FragTrap copyFrag(namedFrag);
    std::cout << std::endl;

    // Test assignment operator
    std::cout << "Assigning FragTrap to another:" << std::endl;
    FragTrap assignedFrag;
    assignedFrag = namedFrag;
    std::cout << std::endl;

    // Test attack method
    std::cout << "Testing attack method:" << std::endl;
    namedFrag.attack("Enemy 1");
    namedFrag.attack("Enemy 2");
    std::cout << std::endl;

    // Test highFivesGuys method
    std::cout << "Testing highFivesGuys method:" << std::endl;
    namedFrag.highFivesGuys();
    std::cout << std::endl;

    // Test energy depletion
    std::cout << "Depleting energy points:" << std::endl;
    for (int i = 0; i < 11; i++)
        namedFrag.attack("Energy Drain Test");
    std::cout << std::endl;

    // Test destruction chaining
    std::cout << "Exiting program to test destructors:" << std::endl;

    return 0;
}

