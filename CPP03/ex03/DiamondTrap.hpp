/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:00:28 by moel-fat          #+#    #+#             */
/*   Updated: 2024/12/09 18:28:49 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class DiamondTrap :public  FragTrap , public ScavTrap
{
	private:
		std::string Name;
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap& var);
		DiamondTrap& operator=(const DiamondTrap& var);
		~DiamondTrap();
		DiamondTrap(const std::string& var);

		void attack(const std::string& target);
		void whoAmI();
};

#endif
