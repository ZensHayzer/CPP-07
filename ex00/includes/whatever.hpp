/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:20:06 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/23 09:33:22 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename t>
void swap(t &x, t &y)  {
    t   tmp;
    
    tmp = x;
    x = y;
    y = tmp;
}

template <typename t>
t const &min(t const & x, t const & y)  {
    if (x < y)
        return (x);
    else
        return (y);
}

template <typename t>
t const &max(t const & x, t const & y)  {
    if (x > y)
        return (x);
    else
        return (y);
}

#endif