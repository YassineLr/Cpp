# include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout<<"Default constructor called"<<std::endl;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
    this->_damage = 0;
}

ClapTrap::~ClapTrap(){
    std::cout << "destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    std::cout <<"parameterized constructor called"<<std::endl;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
    this->_damage = 0;
    this->_name = name;
}

ClapTrap& ClapTrap::operator=(ClapTrap &obj){
    std::cout <<"copy assignement operator called"<<std::endl;
    this->_name = obj.getName();
    return *this;
}

ClapTrap::ClapTrap(ClapTrap &obj){
    std::cout <<"copy constructor called"<<std::endl;
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
    if (_energyPoints >= 1) {
        _hitPoints -= _damage;
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " doesn't have enough energy to attack!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if(_energyPoints >= 1 && this->_hitPoints >= 1 ){
        _energyPoints--;
        _hitPoints += amount;
    } else {
        std::cout << "ClapTrap " << _name << " doesn't have enough energy to be repaired!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->_hitPoints >= amount && this->_hitPoints >= 1)
    {
        this->_hitPoints -= amount;
        std::cout << "ClapTrap :" << this->_name << " take " << amount << " damage points" <<std::endl;
    } else
        std::cout << "ClapTrap: " << this->_name << " is died !" << std::endl;
}
