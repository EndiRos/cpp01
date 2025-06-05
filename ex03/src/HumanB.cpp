/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 08:35:33 by endika            #+#    #+#             */
/*   Updated: 2025/06/05 10:37:09 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

 HumanB::HumanB (std::string name) : _name (name), _weapon(NULL)
{
    
}
HumanB::~HumanB() {}

void HumanB::attack()
{
    if (_weapon && !_weapon->getType().empty())
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " not have weapon" << std::endl;
}
void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}