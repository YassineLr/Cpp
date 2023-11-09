/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:06:24 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/05 12:43:09 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(){
    this->name = "Veridis";
    std::cout<< this->name << " created" << std::endl;
}

Zombie ::Zombie(std::string name){
    this->name = name;
    std::cout<< this->name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout<< this->name <<" is dead"<< std::endl;
}

void Zombie :: announce(){
    std :: cout << this->name<<": BraiiiiiiinnnzzzZ..." << std :: endl;
}
