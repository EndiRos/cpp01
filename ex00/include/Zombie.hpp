/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:25:45 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/04 10:19:32 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <stdio.h>
#include <iomanip>
#include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce( void );

    private:
        std::string _name;
};

Zombie *new_zombie(std::string name);
void    randomChump( std::string name);
#endif