/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:20:06 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/24 13:56:29 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>

class Array {
    public:
        Array();
        Array(unsigned int len);
        Array(Array const & src);
        ~Array();
        
        Array   &operator=(Array const & src);
        T       &operator[](size_t index) const;

        unsigned int    size() const;
        
    private:
        T               *_array;
        unsigned int    _size;
};

#endif