/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:58:07 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/02 12:29:57 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

int main(int ac, char **av){
    {
        Weapon club("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of weapon");
        bob.attack();    
    }
    {
        Weapon club("crude spiked club");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("hahaha");
        jim.attack();
    }
}
