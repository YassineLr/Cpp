/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 06:48:15 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/01 07:48:12 by ylarhris         ###   ########.fr       */
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
        ~Zombie();
        void    setName(std::string name);
        void    announce(void);
};

Zombie* zombieHorde( int N, std::string name );
# endif
