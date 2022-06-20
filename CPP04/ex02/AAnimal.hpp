/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:43:53 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/07 14:29:07 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &copyObj);
		virtual	~AAnimal();
		AAnimal &operator = (const AAnimal &copyObj);

		const std::string	&getType(void) const;
		virtual void		makeSound(void) const = 0;
};

#endif
