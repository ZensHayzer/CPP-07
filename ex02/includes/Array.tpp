/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:00:38 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/23 10:52:37 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename t>
Array<t>::Array() : _array(new t[0]), _size(0)  {
    
}

template <typename t>
Array<t>::Array(unsigned int len) : _array(new t[len]), _size(len)  {
    
}

template <typename t>
Array<t>::Array(Array<t> const & src) : _array(new t[src._size]), _size(src._size)  {
    for (unsigned int i = 0; i < _size; i++)    {
        _array[i] = src._array[i];
    }
}

template <typename t>
Array<t>::~Array()  {
    delete [] _array;
}

template <typename t>
Array<t>   &Array<t>::operator=(Array<t> const & src)   {
    if (this != &src)   {
        _size = src._size;
        delete [] _array;
        _array = new t[_size];
        for (unsigned int i = 0; i < _size; i++) {
            _array[i] = src._array[i];
        }
    }
    
    return (*this);
}

template <typename t>
t   &Array<t>::operator[](size_t index) const   {
    if (index < 0 || index >= _size)
        throw (std::out_of_range("Wrong index"));
    return (_array[index]);
}

template <typename t>
unsigned int    Array<t>::size() const  {
    return (_size);
}