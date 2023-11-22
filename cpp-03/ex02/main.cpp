# include "FragTrap.hpp"


int main(){

    FragTrap c;
    FragTrap a("hamid");
    
    // c.setEnergyPoints(12);
    // std::cout << c.getEnergyPoints() <<std::endl;
    // std::cout << c.getHitPoints() <<std::endl;
    c = a;
    c.printStatus();
    c.attack("uay");
    c.setEnergyPoints(0);
    c.printStatus();
    c.beRepaired(100);
    c.printStatus();
    c.takeDamage(10);
    c.printStatus();
    a.highFivesGuys();
    // c.getDamage();
    // c.setEnergyPoints(0);
    // c.attack("uah");
    // c.beRepaired(1);
    // c.attack("uah");
}