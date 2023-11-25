# include "Cure.hpp"

Cure::Cure():AMateria(){
    std::cout << "Cure constructor called" << std::endl;
    this->_type = "Cure";
}

Cure::Cure(Cure &obj):AMateria(obj){
    *this = obj;
}

Cure& Cure::operator=(const Cure& obj){
    this->_type = obj._type;
    return *this;
}

Cure::~Cure(){
    std::cout<<"Cure destructor called"<<std::endl;
}

void Cure::use(ICharacter& target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl ;
}

AMateria* Cure::clone( void ) const
{
    return new Cure() ;
}

