# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){

}

WrongAnimal::~WrongAnimal(){
    std::cout<< "Wrong Animal is dead "<<std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj){
    this->type = obj.type;
    return *this;
}

WrongAnimal::WrongAnimal(WrongAnimal const& obj){
    *this = obj;
}

std::string WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::setType(const std::string& newType) {
    type = newType;
}

void WrongAnimal::makeSound() const{
    std::cout <<"WrongAnimal sound "<<std::endl;
}