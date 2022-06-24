/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:18:55 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/23 14:47:54 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

class NumNotFound : public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("Number is not found in container.");
		}
};

template<typename T>
typename T::iterator	easyfind(T &cont, int num)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), num);
	if (it == cont.end())
		throw NumNotFound();
	return (it);
}

#endif
