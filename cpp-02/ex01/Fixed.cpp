/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 00:53:09 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/17 00:53:10 by ylarhris         ###   ########.fr       */
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

float Fixed::toInt() const{
    float rNumber;

    rNumber =  this->getRawBits() / ( 1<<this->_FractionatBits );
    return (rNumber);
}

std::ostream& operator <<(std::ostream &os, const Fixed &fixed){
    os << fixed.toFloat();
    return os;
}
