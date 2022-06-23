/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:55:30 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/18 22:29:33 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T *arr, const int &len, void (*func)(T &elem))
{
	for (int i = 0; i < len; ++i)
		func(arr[i]);
}

template<typename T>
void	printElem(T &elem)
{
	std::cout << elem << std::endl;
}

#endif