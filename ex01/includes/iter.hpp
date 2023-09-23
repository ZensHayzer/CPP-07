/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:20:06 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/23 09:48:12 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename t, typename a>
void    iter(t *array, int len, void (*f)(a &)) {
    if (len > 0)   {
        for (int i = 0; i < len; i++)   {
            f(array[i]);
        }
    }
}

template <typename t>
void    print(t & c)    {
    std::cout << c << std::endl;
}

#endif