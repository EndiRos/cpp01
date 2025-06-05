/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endika <endika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:13:10 by endika            #+#    #+#             */
/*   Updated: 2025/06/05 14:35:54 by endika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void find_and_replace (std::ifstream& input, std::ofstream& output,\
     std::string find, std::string replace)
{
    std::string     newstr;
    size_t          newpos;
    std::string     line;

    if (output.is_open())
    {
        while (getline(input, line))
        {
            size_t pos = 0;
            newstr.clear();
            while (true)
            {
                newpos = line.find(find, pos);
                if (newpos == std::string::npos)
                {    
                   newstr += line.substr(pos);
                   break;
                }
                newstr += line.substr(pos, newpos - pos);
                newstr += replace;
                pos = newpos + find.length();
            }
            output << newstr << std::endl;    
        
        }
    }
}

int main (int argc, char **argv)
{
    std::string     filename;
    std::string     filename_output;
    std::string     find;
    std::string     replace;

    
    if (argc != 4)
    {   
        std::cout <<" you must give arg filename string to replace s1 for s2" << std::endl;
        return (1);
    }
    filename = argv[1];
    std::ifstream input(filename.c_str());
    if (!input.is_open())
    {   
        std::cout <<"the filename is incorrect o doesnt exist" << std::endl;
        return(1);
    }
    find = argv[2];
    replace = argv[3];
    if (find.empty() ||  replace.empty())
    {   
        std::cout <<"u need something to find and/or replace" << std::endl;
        return(1);
    }
    filename_output = filename;
    filename_output.append(".replace");
    std::ofstream output(filename_output.c_str());
    find_and_replace(input, output,find, replace);
    input.close();
    output.close();
}
