# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
    this->type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "Wrong Cat is dead" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj):WrongAnimal(obj){

}

WrongCat& WrongCat::operator=(WrongCat const &obj){
    this->type = obj.getType();
    return *this;
}

void WrongCat::makeSound() const{
    std::cout <<"Wrong Miao"<< std::endl;
}
