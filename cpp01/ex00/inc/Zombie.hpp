/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:26:30 by fgameiro          #+#    #+#             */
/*   Updated: 2026/07/29 16:59:04 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
class   Zombie {
private:
    std::string name;
public:
    Zombie(std::string Zombie);
    ~Zombie();
    void    announce( void );
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif