/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 05:46:14 by fabou-za          #+#    #+#             */
/*   Updated: 2023/01/02 05:47:38 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void function(T const &x)
{
    std::cout << x << std::endl;
}

template <typename T>
void iter(T *array, size_t len, void (*func)(T const &))
{
    for (size_t i = 0; i < len; i++)
    {
        func(array[i]);
    }
}

#endif
