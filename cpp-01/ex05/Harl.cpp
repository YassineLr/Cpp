/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:26:49 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/04 11:26:54 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl(){
    this->levels[0]="DEBUG";
    this->levels[1]="INFO";
    this->levels[2]="WARNING";
    this->levels[3]="ERROR";
    this->memFunc[0] = &Harl::debug;
    this->memFunc[1] = &Harl::info;
    this->memFunc[2] = &Harl::warning;
    this->memFunc[3] = &Harl::error;
}

void    Harl::debug(){
    
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void Harl::info(){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put "
        "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
                    "years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
    for (size_t i = 0; i < 4; i++)
    {
        if(this->levels[i] == level)
        {
            std::cout << level << std::endl;
            (this->*memFunc[i])();
            return ;
        }
    }
    std::cout << "Level not found !" << std::endl;
}