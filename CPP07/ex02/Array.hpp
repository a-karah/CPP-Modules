/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:20:20 by akarahan          #+#    #+#             */
/*   Updated: 2022/06/20 18:59:32 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_size;

	public:
		Array() : _arr(NULL), _size(0) {}
		Array(unsigned int n) : _arr(new T[n]), _size(n) {}
		Array(const Array<T> &copyObj) : _arr(NULL), _size(0)
		{
			*this = copyObj;
		}
		~Array()
		{
			if (_size)
				delete [] _arr;
		}

		Array<T>	&operator = (const Array<T> &copyObj)
		{
			if (this != &copyObj)
			{
				if (_size)
					delete [] _arr;
				_size = copyObj._size;
				_arr = new T[_size];
				for (unsigned int i = 0; i < _size; ++i)
					_arr[i] = copyObj._arr[i];
			}
			return (*this);
		}
		T&			operator[](const unsigned int idx) const
		{
			if (idx >= _size || idx < 0)
				throw OutofBound();
			return (_arr[idx]);
		}

		unsigned int	size(void) const
		{
			return (_size);
		}

		class OutofBound : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Array error: Index is out of bound");
				}
		};
};

template<typename T>
std::ostream& operator << (std::ostream& os, const Array<T> &obj)
{
	os << "[";
	for (int i = 0; i < obj.size(); ++i)
		os << obj[i] << ((i != (obj.size() - 1)) ? " " : "");
	os << "]";
	return (os);
}

#endif
