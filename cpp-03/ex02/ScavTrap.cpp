/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 05:51:23 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/22 06:03:40 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout<<"ScavTrap Default constructor called"<<std::endl;
    this->_energyPoints = 50;
    this->_hitPoints = 100;
    this->_damage = 20;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap &obj){
    this->_name = obj.getName();
    this->_damage = obj.getDamage();
    this->_hitPoints = obj.getHitPoints();
    this->_energyPoints = obj.getEnergyPoints();
    return *this;
}

ScavTrap::ScavTrap(ScavTrap &obj) : ClapTrap(obj){
    std::cout<<"ScavTrap Copy constructor called"<<std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout <<"ScavTrap parameterized constructor called"<<std::endl;
    setEnergyPoints(50);
    setDamage(20);
    setHitPoints(100);
}

void ScavTrap::attack(const std::string &target) {
    if (checkStatus()) {
        _energyPoints -= 1;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate(void){
    std::cout << getName() <<" is now in Gate keeper mode"<< std::endl;
}


void ScavTrap::printStatus(){
    std::cout<< "ScavTrap "<< this->_name << " has :"<<std::endl;
    std::cout << "Energy Points : "<<this->getEnergyPoints() << std::endl;
    std::cout << "Hit Points : "<<this->getHitPoints() << std::endl;
    std::cout << "Damage : "<<this->getDamage() << std::endl;
}