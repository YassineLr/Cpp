/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 06:48:36 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/02 08:15:53 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    this->name = "CrocoMan";
}

void Zombie::setName(std::string name){
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout<< this->name <<" is dead"<< std::endl;
}

void Zombie :: announce(){
    std :: cout << this->name<<": BraiiiiiiinnnzzzZ..." << std :: endl;
}
