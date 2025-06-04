/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:25:45 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/04 13:06:33 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <sstream>

class Zombie
{
    public:
        ~Zombie();
        void announce( void );
        Zombie();
        void set_name(std::string name);

    private:
        std::string _name;
        
};

Zombie* new_zombie(std::string name);
Zombie* zombieHorde( int N, std::string name );
#endif