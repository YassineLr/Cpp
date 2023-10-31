#include "phonebook.hpp"



std::string Contact::getFirstName(){
    return this->firstName;
}

std::string Contact::getLastName(){
    return this->lastName;
}

std::string Contact::getNickname(){
    return this->nickname;

}

std::string Contact::getPhoneNumber(){
    return this->phoneNumber;
}

std::string Contact::getDarkSecret(){
    return this->darkSecret;
}

int Contact :: getid(){
    return this->id;
}


Contact :: Contact(){

}

Contact :: Contact(std :: string firstName, std :: string lastName, std :: string nickname, std :: string phoneNumber,std :: string darkSecret,int id){
    if (isValidName(firstName))
        this->firstName = firstName;
    if (isValidName(lastName))
        this->lastName = lastName;
    if (isValidNumber(phoneNumber))
        this->phoneNumber = phoneNumber;
    this->nickname = nickname;
    this->darkSecret = darkSecret;
    this->id = id;
}

void Contact :: printContact(){
    std::cout <<"Index : "<< this->id << std :: endl;
    std::cout <<"First Name : "<< this->firstName << std :: endl;
    std::cout <<"Last Name : "<< this->lastName << std :: endl;
    std::cout <<"Nickname : "<< this->nickname << std :: endl;
    std::cout << "Phone Number : "<< this->phoneNumber << std:: endl;
    std::cout << "Dark secret : " << this->darkSecret << std:: endl;

}


