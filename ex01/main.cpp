/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 05:26:03 by fabou-za          #+#    #+#             */
/*   Updated: 2023/01/02 05:48:34 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int numbers[] = {1,2,3,4,5,6,8,9,10};
    std::string names[] = {"Zineb","Sahar","Houda","Rajae"};
    char str[] = "hello world";
    double doubleNumbers[] =  {1.1,2.5,3.8,4.9,5.78,6.9,8,9,10.8};

    iter(numbers, 9, function);
    std::cout << std::endl;
    iter(names, 4, function);
    std::cout << std::endl;
    iter(str, 11, function);
    std::cout << std::endl;
    iter(doubleNumbers, 9, function);
    return (0);
}
