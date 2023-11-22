/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 05:51:02 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/22 05:57:51 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"


ClapTrap::ClapTrap(){
    std::cout<<"ClapTrap Default constructor called"<<std::endl;
    this->_name = "Veridis";
    this->_energyPoints = 10;
    this->_hitPoints = 10;
    this->_damage = 0;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    std::cout <<"ClapTrap parameterized constructor called"<<std::endl;
    this->_name = name;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
    this->_damage = 0;
}

ClapTrap& ClapTrap::operator=(ClapTrap &obj){
    this->_name = obj.getName();
    this->_damage = obj.getDamage();
    this->_hitPoints = obj.getHitPoints();
    this->_energyPoints = obj.getEnergyPoints();
    return *this;
}

ClapTrap::ClapTrap(ClapTrap &obj){
    std::cout <<"ClapTrap copy constructor called"<<std::endl;
    *this = obj;
}

//getters
std::string ClapTrap::getName() const {
    return _name;
}
int ClapTrap::getHitPoints() const {
    return _hitPoints;
}
int ClapTrap::getEnergyPoints() const {
    return _energyPoints;
}
int ClapTrap::getDamage() const {
    return _damage;
}
// Setters
void ClapTrap::setName(const std::string& name) {
    _name = name;
}
void ClapTrap::setHitPoints(int hitPoints) {
    _hitPoints = hitPoints;
}
void ClapTrap::setEnergyPoints(int energyPoints) {
    _energyPoints = energyPoints;
}
void ClapTrap::setDamage(int damage) {
    _damage = damage;
}

void ClapTrap::attack(const std::string &target) {
    if (checkStatus()) {
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if(checkStatus()){
        _energyPoints--;
        _hitPoints += amount;
    }
}

bool ClapTrap::checkStatus(){
    if(this->_energyPoints <= 0){
        std::cout << this->_name << " has no energy left " << std::endl;
        return false; 
    }
    if (this->_hitPoints <= 0){
        std::cout << this->_name << " is dead" << std::endl;
        return false;
    }
    return true;
}

void ClapTrap::takeDamage(unsigned int amount){
    if(this->checkStatus()){
        _hitPoints-=amount;
        _hitPoints = (_hitPoints < 0) ? 0 : _hitPoints;
        std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::printStatus(){
    std::cout<< "ClapTrap "<< this->_name << " has :"<<std::endl;
    std::cout << "Energy Points : "<<this->getEnergyPoints() << std::endl;
    std::cout << "Hit Points : "<<this->getHitPoints() << std::endl;
    std::cout << "Damage : "<<this->getDamage() << std::endl;
}