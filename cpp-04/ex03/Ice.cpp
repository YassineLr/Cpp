# include "Ice.hpp"

Ice::Ice(){
    std::cout << "Ice constructor called" << std::endl;
    this->_type = "ice";
}

Ice::Ice(Ice &obj){
    *this = obj;
}

Ice& Ice::operator=(const Ice& obj){
    this->_type = obj._type;
    return *this;
}

Ice::~Ice(){
    std::cout<<"Ice destructor called"<<std::endl;
}

void Ice::use(ICharacter& target ){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl ;
}

AMateria* Ice::clone( void ) const{
    return new Ice() ;
}
