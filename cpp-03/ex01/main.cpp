/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 05:52:06 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/22 06:02:01 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"


int main(){

    ScavTrap c;
    ScavTrap a("hamid");

    a.printStatus();
    c.printStatus();
    c.attack("Ahmed");
    c.printStatus();
    c.beRepaired(100);
    c.printStatus();
    c.takeDamage(10);
    c.printStatus();
    c.guardGate();
}