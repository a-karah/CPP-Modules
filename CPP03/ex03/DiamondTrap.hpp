/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:04:25 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/04 12:28:51 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		
	public:
		DiamondTrap();
		DiamondTrap(std::string	name);
		DiamondTrap(const DiamondTrap &copyObj);
		DiamondTrap	&operator = (const DiamondTrap &copyObj);
		~DiamondTrap();

		void	attack(const std::string& target);
		void	whoAmI();
};

#endif
