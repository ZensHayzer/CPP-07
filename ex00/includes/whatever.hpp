/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:20:06 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/24 13:55:27 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y)  {
    T   tmp;
    
    tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T const &min(T const & x, T const & y)  {
    if (x < y)
        return (x);
    else
        return (y);
}

template <typename T>
T const &max(T const & x, T const & y)  {
    if (x > y)
        return (x);
    else
        return (y);
}

#endif