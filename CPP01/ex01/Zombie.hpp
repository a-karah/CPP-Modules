/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:06:50 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/31 12:54:04 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	_name;
		
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string in);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
