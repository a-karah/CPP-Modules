/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:26:53 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/02 14:31:15 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		static const int	_fracBits = 8;
		int					_fixedNum;

	public:
		/* Constructors & destructors */
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &fx);
		Fixed &operator = (const Fixed &fx);
		~Fixed();

		/* Comparison Operators */
		bool operator > (const Fixed &fx);
		bool operator < (const Fixed &fx);
		bool operator >= (const Fixed &fx);
		bool operator <= (const Fixed &fx);
		bool operator == (const Fixed &fx);
		bool operator != (const Fixed &fx);

		/* Arithmetic Operators */
		Fixed operator + (const Fixed &fx);
		Fixed operator - (const Fixed &fx);
		Fixed operator * (const Fixed &fx);
		Fixed operator / (const Fixed &fx);

		/* Increment/Decrement Operators */
		Fixed &operator ++ (void);
		Fixed &operator -- (void);
		Fixed operator ++ (int);
		Fixed operator -- (int);

		/* Min & Max functions */
		static Fixed &min(Fixed &fx1, Fixed &fx2);
		static Fixed &max(Fixed &fx1, Fixed &fx2);
		static const Fixed &min(const Fixed &fx1, const Fixed &fx2);
		static const Fixed &max(const Fixed &fx1, const Fixed &fx2);

		/* Other member functions */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &fx);

#endif
