/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:24:42 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/18 22:32:54 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int	main(void)
{
	int	len = 10;
	int	array[len];

	for (int i = 0; i < len; ++i)
		array[i] = i * 3;

	iter(array, len, printElem);

	return (0);
}
