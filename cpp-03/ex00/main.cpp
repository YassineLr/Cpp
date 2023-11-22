/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 04:08:13 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/22 05:48:21 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"


int main(){
    ClapTrap a;
    ClapTrap b("Yassine");

    a.printStatus();
    a.attack("wld lhaj");
    a.printStatus();
    a.beRepaired(12);
    a.printStatus();
    a.attack("yassir");
    a.setEnergyPoints(120);
    a.attack("mokane");
    a.takeDamage(10);
    a.beRepaired(100);
}