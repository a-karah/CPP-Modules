/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:40:42 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/23 16:43:02 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <exception>
# include <limits>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_vec;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copyObj);
		~Span();

		Span	&operator = (const Span &copyObj);

		void	addNumber(int num);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);

		class NotEnoughSpace : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Not enough space is allocated.");
				}
		};

		class SpanNotFound : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Span is not found.");
				}
		};
};

#endif
