# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    // std::cout<<"FragTrap Default constructor called"<<std::endl;
    setName("Yassine");
    setEnergyPoints(100);
    setHitPoints(100);
    setDamage(30);
}

FragTrap::~FragTrap(){
    // std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap &obj){
    std::cout <<"FragTrap copy assignement operator called"<<std::endl;
    this->_name = obj.getName();
    this->_damage = obj.getDamage();
    this->_hitPoints = obj.getHitPoints();
    this->_energyPoints = obj.getEnergyPoints();
    return *this;
}

FragTrap::FragTrap(FragTrap &obj){
    *this = obj;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    // std::cout <<"FragTrap parameterized constructor called"<<std::endl;
    setEnergyPoints(50);
    setDamage(20);
    setHitPoints(100);
}

void FragTrap::highFivesGuys(void){
    std::cout << getName() <<" : high Five"<< std::endl;
}

void FragTrap::attack(const std::string &target) {
    if (getEnergyPoints() >= 1) {
        _hitPoints -= _damage;
        if (_hitPoints < 0){
            _hitPoints = 0;
        }
        setEnergyPoints(getEnergyPoints() - 1);
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    } else {
        std::cout << "FragTrap " << _name << " doesn't have enough energy to attack!" << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount){
    if(_energyPoints >= 1){
        _energyPoints--;
        _hitPoints += amount;
    } else {
        std::cout << "FragTrap " << _name << " doesn't have enough energy to be repaired!" << std::endl;
    }
}

void FragTrap::takeDamage(unsigned int amount){
    if (this->_hitPoints >= amount && this->_hitPoints >= 1)
    {
        this->_hitPoints -= amount;
        std::cout << "FragTrap :" << this->_name << " take " << amount << " damage points" <<std::endl;
    } else
        std::cout << "FragTrap: " << this->_name << " is died !" << std::endl;
}

void FragTrap::printStatus(){
    std::cout<< "FragTrap "<< this->_name << " has :"<<std::endl;
    std::cout << "Energy Points : "<<this->getEnergyPoints() << std::endl;
    std::cout << "Hit Points : "<<this->getHitPoints() << std::endl;
    std::cout << "Damage : "<<this->getDamage() << std::endl;
}