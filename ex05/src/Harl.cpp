/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 16:24:52 by endika            #+#    #+#             */
/*   Updated: 2025/06/05 18:06:37 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}
Harl::~Harl()
{
    
}
void Harl::debug(void)
{
    std::cout   << "I love having extra bacon for my 7XL-double-cheese-triple-pickle"
                <<"-special- ketchup burger. I really do!"
                << std::endl;
    return;
}
void Harl::info(void)
{
    std::cout   << "I cannot believe adding extra bacon costs more money."
                << "You didn’t put enough bacon in my burger! If you did,"
                << "I wouldn’t be asking for more!"
                << std::endl;
    return;
}

void Harl::warning(void)
{
    std::cout   << "I think I deserve to have some extra bacon for free."
                << " I’ve been coming for years, whereas you started"
                << " working here just last month."
                << std::endl;
    return;
}

void Harl::error(void)
{
    std::cout   << "level: These messages indicate that an unrecoverable" 
                << " error has occurred. This is usually a critical "
                << "issue that requires manual intervention."
                << std::endl;
    return;
}

void Harl::complain(std::string info)
{
    int i;
    
    i = 0;
    typedef void (Harl::*Action)();
    Action actions[] ={&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string information [] {"DEBUG","INFO","WARNING","ERROR"};
    while (i < 4 && info != information[i]) 
        i++;
    if ( info != information[i])
        return;
    for (; i < 4; i ++)
        (this->*actions[i])();
}
