/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:37:37 by moel-fat          #+#    #+#             */
/*   Updated: 2024/12/12 17:21:56 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string Name;
		int Hit;
		int Energy;
		int Attack;

	public:
		// Constructors and Destructor
		ClapTrap();
		ClapTrap& operator=(const ClapTrap& other);
		ClapTrap(const ClapTrap& other);
		~ClapTrap();
		ClapTrap(const std::string& name);
		// Member Functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
