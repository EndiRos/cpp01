/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:04:55 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/05 10:37:50 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _weapon(weapon){}

Weapon::~Weapon(){}

std::string Weapon::getType ()
{
    return _weapon;
}

void Weapon::setType(std::string weapon) 
{
    _weapon = weapon;
}