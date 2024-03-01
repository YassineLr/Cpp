/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 05:51:15 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/22 05:51:16 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"


int main(){

    FragTrap c;
    FragTrap a("hamid");

    c = a;
    c.printStatus();
    c.attack("uay");
    c.setEnergyPoints(0);
    c.printStatus();
    c.beRepaired(100);
    c.printStatus();
    c.takeDamage(10);
    c.printStatus();
    a.highFivesGuys();
}