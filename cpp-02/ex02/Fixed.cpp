/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinelr <yassinelr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 00:53:09 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/20 02:08:10 by yassinelr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    return this->_rawBits;
}

void    Fixed :: setRawBits(int const raw){
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

    rNumber =  (float)this->getRawBits() / ( 1<<this->_FractionatBits );
    return (rNumber);
}

int Fixed::toInt() const{
    int rNumber;

    rNumber =  this->getRawBits() / ( 1<<this->_FractionatBits );
    return (rNumber);
}

std::ostream& operator <<(std::ostream &os, const Fixed &fixed){
    os << fixed.toFloat();
    return os;
}

bool   operator>(Fixed const & a, Fixed const &b){
    return a.getRawBits() > b.getRawBits();
}

bool   operator<(Fixed const & a, Fixed const &b){
    return a.getRawBits() < b.getRawBits();
}

bool   operator==(Fixed const & a, Fixed const &b){
    return a.getRawBits() == b.getRawBits();
}

bool   operator!=(Fixed const & a, Fixed const &b){
    return !(a == b);
}

bool   operator>=(Fixed const & a, Fixed const &b){
    return (a > b) || (a == b);
}

bool   operator<=(Fixed const & a, Fixed const &b){
    return (a < b) || (a == b);
}

Fixed   Fixed::operator*(Fixed const &obj){
    return Fixed(this->toFloat() * obj.toFloat());
}

Fixed   Fixed::operator-(Fixed const &obj){
    return Fixed(this->toFloat() - obj.toFloat());
}

Fixed   Fixed::operator+(Fixed const &obj){
    return Fixed(this->toFloat() + obj.toFloat());
}

Fixed   Fixed::operator/(Fixed const &obj){
    return Fixed(this->toFloat() / obj.toFloat());
}

Fixed&  Fixed::operator++(){
    this->_rawBits++;
    return *this;
}

Fixed  Fixed::operator++(int){
    Fixed result(*this);
    this->_rawBits++;
    return result;
}

Fixed&  Fixed::operator--(){
    this->_rawBits--;
    return *this;
}

Fixed  Fixed::operator--(int){
    Fixed result(*this);
    this->_rawBits--;
    return result;
}

Fixed& Fixed::max(Fixed &obj1, Fixed &obj2){
    return (obj1.getRawBits() > obj2.getRawBits()) ? obj1 : obj2;
}

Fixed& Fixed::min(Fixed &obj1, Fixed &obj2){
    return (obj1.getRawBits() < obj2.getRawBits()) ? obj1 : obj2;
}

const Fixed& Fixed::max(Fixed const &obj1, Fixed const &obj2){
    return (obj1.getRawBits() > obj2.getRawBits()) ? obj1 : obj2;
}

const Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2){
    return (obj1.getRawBits() < obj2.getRawBits()) ? obj1 : obj2;
}