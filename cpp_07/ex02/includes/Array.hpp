/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/24 20:49:53 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include "libft.h"

template<typename T>
class Array
{
	private:
		T*				data;
		unsigned int	arraySize;

	public:
	// Contructors & Destructor
		Array() : data(nullptr), arraySize(0){}
		Array(unsigned int n) : arraySize(n)
		{
			data = new T[n]();
		}
		Array(const Array &copy) : arraySize(copy.arraySize)
		{
			data = new T[arraySize];

			for (size_t i = 0; i < arraySize; i++)
				data[i] = copy.data[i];
		}
		~Array()
		{
			delete[] data;
		}
	// Operators
		Array& operator=(const Array &other)
		{
			if (this != &other)
			{
				delete[] (data);
				arraySize = other.arraySize;
				data = new T[arraySize]();
				for (size_t i = 0; i < arraySize; i++)
					data[i] = other.data[i];
			}
			return (*this);
		};
		T& operator[](unsigned int index) const
		{
			if (index >= arraySize)
				throw std::out_of_range("Index out of bounds");
			return (data[index]);
		}
	// Member function
		unsigned int	size() const
		{
			return (arraySize);
		}
};

#endif
