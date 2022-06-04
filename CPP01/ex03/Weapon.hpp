/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:05:04 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/31 14:41:02 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string	type);
		~Weapon();
		
		const std::string	&getType(void) const;
		void				setType(std::string type);
};

#endif
