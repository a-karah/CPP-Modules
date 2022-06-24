/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:29:04 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/24 15:42:11 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iterator>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() {};
		MutantStack(const MutantStack &copyObj) { *this = copyObj; };
		~MutantStack() {};

		MutantStack	&operator = (const MutantStack &copyObj)
		{
			if (*this != copyObj)
				std::stack<T, Container>::operator=(copyObj);
			return (*this);
		}

		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		iterator				begin(void) { return (this->c.begin()); }
		iterator				end(void) { return (this->c.end()); }

		const_iterator			begin(void) const { return (this->c.begin()); }
		const_iterator			end(void) const { return (this->c.end()); }

		reverse_iterator		rbegin(void) { return (this->c.rbegin()); }
		reverse_iterator		rend(void) { return (this->c.rend()); }

		const_reverse_iterator	rbegin(void) const { return (this->c.rbegin()); }
		const_reverse_iterator	rend(void) const { return (this->c.rend()); }
};

#endif
