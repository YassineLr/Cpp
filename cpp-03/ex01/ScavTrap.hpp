#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
    public : 
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap& operator=(ScavTrap &obj);
        ScavTrap(ScavTrap &obj);
        void guardGate();
        void attack(const std::string& target);
        void printStatus();
};

#endif