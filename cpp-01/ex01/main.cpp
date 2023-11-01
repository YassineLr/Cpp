/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 06:49:15 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/01 07:57:56 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(int ac, char **av){

    (void) ac;
    (void) av;
    
    Zombie *zombies = zombieHorde(10 , "Yassine");
    delete [] zombies;
}