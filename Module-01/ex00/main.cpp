/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 06:33:56 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/05 12:18:56 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av){
    (void)ac;
    (void)av;
    Zombie e("yassir");
    Zombie *x = newZombie("moskir");
    Zombie z;
    
    z.announce();
    e.announce();
    x->announce();
    randomChump("Yassine");
    delete x;
}