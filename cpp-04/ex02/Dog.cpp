# include "Dog.hpp"

Dog::Dog() : Animal(){
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::~Dog(){
    std::cout << "Dog is dead" << std::endl;
    delete this->_brain;
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