/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:26:49 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/04 11:54:25 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "harlFilter.hpp"

HarlFilter::HarlFilter(){
    this->levels[0]="DEBUG";
    this->levels[1]="INFO";
    this->levels[2]="WARNING";
    this->levels[3]="ERROR";
}

void    HarlFilter::debug(){
    
    std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void HarlFilter::info(){
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn't put "
        "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void HarlFilter::warning(){
    std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for"
                    "years whereas you started working here since last month." << std::endl;
}

void HarlFilter::error(){
    std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void HarlFilter::complain(std::string level){
    int     index;
    
    for (index = 0; index < 4; index++)
    {
        if(this->levels[index] == level)
            break ;
    }
    switch (index)
    {
    case 0:
        this->debug();
        break;
    case 1:
        this->info();
        break;
    case 2:
        this->warning();
        break;
    case 3:
        this->error();
        break;
    default:
        std::cout<<"[ Probably complaining about insignificant problems ]" <<std::endl;
        break;
    }
}