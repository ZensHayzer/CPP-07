/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:20:06 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/23 10:45:05 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename t>

class Array {
    public:
        Array();
        Array(unsigned int len);
        Array(Array const & src);
        ~Array();
        
        Array   &operator=(Array const & src);
        t       &operator[](size_t index) const;

        unsigned int    size() const;
        
    private:
        t               *_array;
        unsigned int    _size;
};

#endif