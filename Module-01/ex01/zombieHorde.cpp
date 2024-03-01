/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 06:49:27 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/01 07:21:06 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++){
        zombies[i].setName(name);
        zombies[i].announce();
    }
    return zombies;
}