/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:00:38 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/24 13:58:28 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0)  {
    
}

template <typename T>
Array<T>::Array(unsigned int len) : _array(new T[len]), _size(len)  {
    
}

template <typename T>
Array<T>::Array(Array<T> const & src) : _array(new T[src._size]), _size(src._size)  {
    for (unsigned int i = 0; i < _size; i++)    {
        _array[i] = src._array[i];
    }
}

template <typename T>
Array<T>::~Array()  {
    delete [] _array;
}

template <typename T>
Array<T>   &Array<T>::operator=(Array<T> const & src)   {
    if (this != &src)   {
        _size = src._size;
        delete [] _array;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++) {
            _array[i] = src._array[i];
        }
    }
    
    return (*this);
}

template <typename T>
T   &Array<T>::operator[](size_t index) const   {
    if (index < 0 || index >= _size)
        throw (std::out_of_range("Wrong index"));
    return (_array[index]);
}

template <typename T>
unsigned int    Array<T>::size() const  {
    return (_size);
}