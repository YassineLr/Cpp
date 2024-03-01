/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 05:50:55 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/22 06:03:27 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout<<"FragTrap Default constructor called"<<std::endl;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
    this->_damage = 30;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap &obj){
    this->_name = obj.getName();
    this->_damage = obj.getDamage();
    this->_hitPoints = obj.getHitPoints();
    this->_energyPoints = obj.getEnergyPoints();
    return *this;
}

FragTrap::FragTrap(FragTrap &obj) : ClapTrap(obj){
    std::cout<<"FragTrap Copy constructor called"<<std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout <<"FragTrap parameterized constructor called"<<std::endl;
    setEnergyPoints(50);
    setDamage(20);
    setHitPoints(100);
}

void FragTrap::highFivesGuys(void){
    std::cout << getName() <<" says high Five"<< std::endl;
}

void FragTrap::attack(const std::string &target) {
    if (checkStatus()) {
        _energyPoints -= 1;
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    }
}

void FragTrap::printStatus(){
    std::cout<< "FragTrap "<< this->_name << " has :"<<std::endl;
    std::cout << "Energy Points : "<<this->getEnergyPoints() << std::endl;
    std::cout << "Hit Points : "<<this->getHitPoints() << std::endl;
    std::cout << "Damage : "<<this->getDamage() << std::endl;
}