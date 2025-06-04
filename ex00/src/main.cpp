/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:05:57 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/04 12:05:59 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    Zombie zom1 = Zombie("Paco stack");
    Zombie zom2 = Zombie("Pepe stack");
    Zombie zom3 = Zombie("Manolo stack");
    Zombie *zom4 = new_zombie("Paco heap");
    Zombie *zom5 = new_zombie("Pepe heap");
    Zombie *zom6 = new_zombie("Manolo heap");
    randomChump("Paco stack scope func");
    randomChump("Paco stack scope func");
    randomChump("Paco stack scope func");
    delete zom4;
    delete zom5;
    delete zom6;
    return 0;
}