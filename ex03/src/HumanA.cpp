/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 08:35:33 by endika            #+#    #+#             */
/*   Updated: 2025/06/05 10:31:29 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}
HumanA::~HumanA()
{
    
}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}