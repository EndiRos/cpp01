/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:05:57 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/04 13:14:16 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    int num;

    if  (argc != 2)
    {
        std::cout << "only 1 argument is needed" << std::endl;
        return 1;
    }
    try
    {
        std::stringstream ss(argv[1]);
        if (!(ss >> num))
        {
            throw std::invalid_argument("Invalid argument");
        }
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << "invalid argument" << std::endl;
        return 1;
    }
    catch (const std::out_of_range& e)
    {
        std::cout << "Out of range: " << e.what() << std::endl;
        return 1;
    }
    if (num <=  0)
    {
        std::cout << "the num of zombies must be positive and  greater than 0" << std::endl;
        return 1;
    }
    Zombie *ptr = zombieHorde(num, "manolitos_");
    delete[] ptr;
    return 0;
}