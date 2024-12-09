/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:33:59 by moel-fat          #+#    #+#             */
/*   Updated: 2024/12/09 18:23:04 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap :virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap& var);
		ScavTrap& operator=(const ScavTrap& var);
		~ScavTrap();
		ScavTrap(const std::string& var);
		void attack (const std::string& target);
		void guardGate();
};

#endif
