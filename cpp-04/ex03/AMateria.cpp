# include "AMateria.hpp"

AMateria::AMateria(){
    std::cout <<"AMateria Constructor called" <<std::endl;
}

AMateria& AMateria::operator=(const AMateria &obj){
    this->_type = obj._type;
    return *this;
}

AMateria::AMateria(const AMateria& obj){
    *this = obj;
}

AMateria::~AMateria(){
    std::cout <<"AMateria Destructor called" <<std::endl;
}

std::string const& AMateria::getType() const{
    return this->_type;
}

AMateria::AMateria(std::string const & type):_type(type){
    std::cout <<"AMateria parametrized Constructor called" <<std::endl;
}

void AMateria::use(ICharacter& target){
    (void)target;
}