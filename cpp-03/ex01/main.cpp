# include "ScavTrap.hpp"


int main(){

    ScavTrap c;
    ScavTrap a("hamid");
    
    // c.setEnergyPoints(12);
    // std::cout << c.getEnergyPoints() <<std::endl;
    // std::cout << c.getHitPoints() <<std::endl;
    c.printStatus();
    c.attack("uay");
    c.printStatus();
    c.beRepaired(100);
    c.printStatus();
    c.takeDamage(10);
    c.printStatus();
    c.guardGate();
    // c.getDamage();
    // c.setEnergyPoints(0);
    // c.attack("uah");
    // c.beRepaired(1);
    // c.attack("uah");
}