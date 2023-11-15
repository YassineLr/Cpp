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

Fixed::Fixed(int rawBits){
    std::cout << "int constructor called" << std::endl;
    this->_rawBits = rawBits << this->_FractionatBits;
}

Fixed::Fixed(float rawBits){
    std::cout << "Float constructor called" << std::endl;
    this->_rawBits = (int)roundf(rawBits * (1 << this->_FractionatBits));
}

Fixed& Fixed::operator=(const Fixed &object){
    std::cout <<"Copy assignment operator called"<<std::endl;
    this->_rawBits = object.getRawBits();
    return *this;
}

float Fixed::toFloat() const{
    float rNumber;

    rNumber =  this->getRawBits() / ( 1<<8 );

    return (rNumber);
}
float Fixed::toInt() const{
    float rNumber;

    rNumber =  this->getRawBits() / ( 1<<8 );

    return (rNumber);
}

std::ostream& operator <<(std::ostream &os, Fixed fixed){
    std::cout << fixed._rawBits;
    return os;
}
