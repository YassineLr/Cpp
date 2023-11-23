# include "Dog.hpp"

Dog::Dog() : Animal(){
    this->type = "Dog";
}

Dog::~Dog(){
    std::cout << "Dog is dead" << std::endl;
}

Dog::Dog(Dog const& obj):Animal(obj){

}

Dog& Dog::operator=(Dog const &obj){
    this->type = obj.getType();
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Haw Haw"<< std::endl;
}