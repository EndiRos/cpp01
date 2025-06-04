/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:04:55 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/04 14:35:03 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _weapon(weapon){}

std::string Weapon::getType ()
{
    return _weapon;
}

void Weapon::setType(std::string weapon) 
{
    _weapon = weapon;
}