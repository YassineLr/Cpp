/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:49:43 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/02 12:11:42 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"

// HumanA.cpp
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {};

void HumanA:: attack(){
    std::cout << this->_name << " attacks with their "<< this->_weapon.getType()<< std::endl;
}
