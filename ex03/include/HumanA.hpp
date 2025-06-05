/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 08:25:18 by endika            #+#    #+#             */
/*   Updated: 2025/06/05 10:33:56 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        
        HumanA(std::string name, Weapon &weapon);
        void attack();
        ~HumanA();

    private :
        std::string _name;
        Weapon      &_weapon;
};

#endif
