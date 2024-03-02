/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 05:24:52 by fabou-za          #+#    #+#             */
/*   Updated: 2023/01/02 05:25:02 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

template <typename T>
T &min(T &x, T &y)
{
    return (x >= y ? y : x);
}

template <typename T>
T &max(T &x, T &y)
{
    return (x <= y ? y : x);
}

#endif
