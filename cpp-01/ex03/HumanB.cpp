/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:22:18 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/05 12:57:17 by ylarhris         ###   ########.fr       */
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
    if (!this->_weapon.getType().empty())
        std::cout << this->_name << " attacks with their "<< this->_weapon.getType()<< std::endl;
    else
        std::cout << this->_name << " have no weapon "<<std::endl;
}
