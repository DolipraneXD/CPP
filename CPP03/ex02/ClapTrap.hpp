/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:37:37 by moel-fat          #+#    #+#             */
/*   Updated: 2024/12/08 15:36:54 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define  CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
	protected:
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
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif
