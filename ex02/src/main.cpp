/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:10:55 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/04 14:36:07 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main(int argv, char  **argc)
{
    (void) argv;
    (void) argc;
    Weapon arm = Weapon("pistola colt");
    arm.setType("Pistola");
    std::cout << arm.getType() << std::endl;
}