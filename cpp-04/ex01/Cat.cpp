# include "Cat.hpp"

Cat::Cat() : Animal(){
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::~Cat(){
    std::cout << "Cat is dead" << std::endl;
    delete this->_brain;
}

Cat::Cat(Cat const &obj):Animal(obj){

}

Cat& Cat::operator=(Cat const &obj){
    this->type = obj.getType();
    return *this;
}

void Cat::makeSound() const{
    std::cout <<"Miao"<< std::endl;
}
