# include "Animal.hpp"

Animal::Animal(){

}

Animal::~Animal(){
    std::cout<< "Animal is dead "<<std::endl;
}

Animal& Animal::operator=(const Animal &obj){
    this->type = obj.type;
    return *this;
}

Animal::Animal(Animal const& obj){
    *this = obj;
}

std::string Animal::getType() const {
    return type;
}

void Animal::setType(const std::string& newType) {
    type = newType;
}

void Animal::makeSound() const{
    std::cout <<"Animal sound "<<std::endl;
}