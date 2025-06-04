
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:14:28 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/04 12:21:21 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return NULL;
    Zombie* horde = new Zombie[N];   
    for(int a = 0; a  < N ; a++)
    {
        std::stringstream ss;
        ss << name << a;
        horde[a].set_name(ss.str());
    }
    return horde;
}
