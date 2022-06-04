/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:51:27 by akarahan          #+#    #+#             */
/*   Updated: 2022/04/27 12:02:29 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	test;

	test.complain("DEBUG");
	test.complain("ERROR");
	test.complain("INFO");
	test.complain("WARNING");
	return (0);
}
