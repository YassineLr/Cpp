/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:30:33 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/05 12:50:34 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){

};

Weapon::Weapon(std::string type){
    this->_type = type;
};

void    Weapon::setType(std::string type){
    this->_type = type;
};

const std::string& Weapon::getType() const{
    return this->_type;
}