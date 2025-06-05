/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 08:25:18 by endika            #+#    #+#             */
/*   Updated: 2025/06/05 10:36:28 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        
        HumanB(const std::string name);
        void attack();
        void setWeapon(Weapon &weapon);
        ~HumanB();

    private :
        std::string _name;
        Weapon      *_weapon;
};

#endif
