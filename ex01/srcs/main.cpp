/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:19:26 by ajeanne           #+#    #+#             */
/*   Updated: 2023/09/23 09:47:52 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()  {
    int         array1[] = {1, 1235, 547, 68464, 6684};
    std::string array2[] = {"toto", "titi", "tata", "Turlututu", "Chapeau", "Pointu"};

    ::iter(array1, 5, print<const int>);
    ::iter(array2, 6, print<const std::string>);
    return (0);
}