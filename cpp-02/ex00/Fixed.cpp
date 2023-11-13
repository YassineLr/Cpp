# include "Fixed.hpp"

Fixed :: Fixed(){
    this->_rawBits = 0;
    std::cout <<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& obj){
    std::cout<<"Copy constructor called"<<std::endl;
    *this = obj; 
}

Fixed :: ~Fixed(){
    std::cout <<"Destructor called"<<std::endl;
}

int Fixed :: getRawBits(void) const{
    std::cout <<"getRawBits member function called"<<std::endl;
    return this->_rawBits;
}

void    Fixed :: setRawBits(int const raw){
    std::cout <<"setRawBits member function called"<<std::endl;
    this->_rawBits = raw;
}

Fixed& Fixed::operator=(const Fixed &object){
    std::cout <<"Copy assignment operator called"<<std::endl;
    this->_rawBits = object.getRawBits();
    return *this;
}

