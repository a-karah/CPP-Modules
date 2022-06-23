/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:39:31 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/18 21:47:54 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &x, T &y)
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
const T	&min(const T &x, const T &y)
{
	return (x < y ? x : y);
}

template<typename T>
const T	&max(const T &x, const T &y)
{
	return (x > y ? x : y);
}

#endif