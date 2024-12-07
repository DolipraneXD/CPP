/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:37:37 by moel-fat          #+#    #+#             */
/*   Updated: 2024/12/07 14:31:00 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define  CLAPTRAP_HPP
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
		ClapTrap();
		ClapTrap(const ClapTrap& var);
		ClapTrap& operator= (const ClapTrap& var);
		~ClapTrap();
		ClapTrap(std::string var);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif
