/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 10:49:08 by endika            #+#    #+#             */
/*   Updated: 2025/06/05 11:16:34 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main (int argc, char **argv)
{
    std::string str;
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    

    str = "HI THIS IS BRAIN";
    std::cout << "The memory address of the string variable " << &str << std::endl;
    std::cout << "The memory address held by stringPTR." << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF." << &stringREF << std::endl;
    std::cout << "The value of the string variable. " << str << std::endl;
    std::cout << "The value pointed to by stringPTR." << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF." << stringREF << std::endl;
    return(0);
}