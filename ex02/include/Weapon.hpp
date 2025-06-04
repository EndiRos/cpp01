/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:48:26 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/04 14:34:40 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
};