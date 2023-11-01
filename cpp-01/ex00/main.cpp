/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 06:33:56 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/01 06:36:08 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av){
    (void)ac;
    (void)av;
    Zombie z;
    Zombie e("yassir");
    Zombie *x = newZombie("moskir");
    
    z.announce();
    e.announce();
    x->announce();
    delete x;
}