# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap &obj);
        ~FragTrap();
        FragTrap& operator=(FragTrap &obj);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void printStatus();
        void highFivesGuys(void);
};
#endif