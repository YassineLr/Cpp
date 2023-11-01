/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 01:04:07 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/01 06:18:04 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie { 
    private : 
        std :: string name;
    public :
        Zombie();
        Zombie(std :: string name);
        ~Zombie();
        void    announce(void);
};

Zombie *newZombie( std :: string name);
void    randomChump( std :: string name);
# endif
