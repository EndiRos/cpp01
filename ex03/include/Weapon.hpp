/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:48:26 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/05 09:36:53 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iomanip>
#include <iostream>

class Weapon
{
    private:
    
        std::string _weapon;
    public:
    
        Weapon(std::string weapon);
        std::string getType();
        void setType(std::string weapon);
        ~Weapon();
};

#endif