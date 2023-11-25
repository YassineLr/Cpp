# include "Character.hpp"

Character::Character(){

}

Character& Character::operator=(const Character &obj){
    this->_name = obj._name;
    for (size_t i = 0; i < 4; i++){
        if (obj._inventory[i]){
            this->_inventory[i] = obj._inventory[i];
        }
    }
    return *this;
}

Character::Character(std::string name){
    this->_name = name;
}

Character::Character(const Character &obj){
    *this = obj;
}

Character::~Character(){
    for (size_t i = 0; i < 4; i++){
        if(this->_inventory[i]) {
            delete this->_inventory[i];
        }
    }
}

std::string const& Character::getName() const{
    return this->_name;
}

void Character::equip(AMateria *m){
    for (int i = 0; i < 4; i++){
        if (!this->_inventory[i]){
            this->_inventory[i] = m ;
            break ;
        }
    }
}

void Character::unequip(int idx){
    this->_inventory[idx] = NULL ;
}

void Character::use(int idx, ICharacter& target){
    if (this->_inventory[idx])
        this->_inventory[idx]->use(target) ;
}
