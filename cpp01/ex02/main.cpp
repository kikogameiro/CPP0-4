/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 11:00:45 by fgameiro          #+#    #+#             */
/*   Updated: 2026/07/31 11:19:32 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;
    
    std::cout << "Memory address of brain: " << &brain << std::endl;
    std::cout << "Memory address held by stringPTR:  " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF:  " << &stringREF << std::endl;

    std::cout << "Value of brain: " << brain << std::endl;
    std::cout << "Value pointed by stringPTR " << *stringPTR << std::endl;
    std::cout << "Value pointed by stringREF" << stringREF << std::endl;
}