# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    // std::cout<<"ScavTrap Default constructor called"<<std::endl;
    setName("Yassine");
    setEnergyPoints(50);
    setHitPoints(100);
    setDamage(20);
}

ScavTrap::~ScavTrap(){
    // std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap &obj){
    std::cout <<"ScavTrap copy assignement operator called"<<std::endl;
    this->_name = obj.getName();
    this->_damage = obj.getDamage();
    this->_hitPoints = obj.getHitPoints();
    this->_energyPoints = obj.getEnergyPoints();
    return *this;
}

ScavTrap::ScavTrap(ScavTrap &obj){
    *this = obj;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    // std::cout <<"ScavTrap parameterized constructor called"<<std::endl;
    setEnergyPoints(50);
    setDamage(20);
    setHitPoints(100);
}

void ScavTrap::guardGate(void){
    std::cout << getName() <<" is now in Gate keeper mode"<< std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (getEnergyPoints() >= 1) {
        _hitPoints -= _damage;
        if (_hitPoints < 0){
            _hitPoints = 0;
        }
        setEnergyPoints(getEnergyPoints() - 1);
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " doesn't have enough energy to attack!" << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount){
    if(_energyPoints >= 1){
        _energyPoints--;
        _hitPoints += amount;
    } else {
        std::cout << "ScavTrap " << _name << " doesn't have enough energy to be repaired!" << std::endl;
    }
}

void ScavTrap::takeDamage(unsigned int amount){
    if (this->_hitPoints >= amount && this->_hitPoints >= 1)
    {
        this->_hitPoints -= amount;
        std::cout << "ScavTrap :" << this->_name << " take " << amount << " damage points" <<std::endl;
    } else
        std::cout << "ScavTrap: " << this->_name << " is died !" << std::endl;
}

void ScavTrap::printStatus(){
    std::cout<< "ScavTrap "<< this->_name << " has :"<<std::endl;
    std::cout << "Energy Points : "<<this->getEnergyPoints() << std::endl;
    std::cout << "Hit Points : "<<this->getHitPoints() << std::endl;
    std::cout << "Damage : "<<this->getDamage() << std::endl;
}