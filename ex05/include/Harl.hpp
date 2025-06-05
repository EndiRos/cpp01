/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 16:19:49 by endika            #+#    #+#             */
/*   Updated: 2025/06/05 18:06:50 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

enum level
{
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void *_actions;
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
}