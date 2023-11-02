/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:22:18 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/02 12:26:18 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanB.hpp"


HumanB::HumanB(std::string name) : _name(name){
    
};

void HumanB:: setWeapon(Weapon weapon){
    this->_weapon = weapon;
}

void HumanB:: attack(){
    std::cout << this->_name << " attacks with their "<< this->_weapon.getType()<< std::endl;
}
