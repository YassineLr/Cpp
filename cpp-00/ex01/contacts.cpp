#include "phonebook.hpp"


bool isEmpty(std :: string str){
    for (size_t i = 0; i < str.size(); i++){
        if(!std :: isspace(str[i]))
            return false;
    }
    return true;
}

bool isValidName(std::string str) {
    if(isEmpty(str))
        return false;
    for (size_t i = 0; i < str.size(); i++) {
        if (!isalpha(str[i]) && str[i] != '-' && str[i] != '_' && str[i] != ' ') {
            return false;
        }
    }
    return true;
}

bool isValidNumber(std :: string num){
    if(isEmpty(num) || num.size() >10 )
        return false;
    for (size_t i = 0; i < num.size(); i++){
        if(!isdigit(num[i])){
            return false;
        }
    }
    return true;
}

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

Contact :: Contact(std :: string firstName, std :: string lastName, std :: string nickname, std :: string phoneNumber,int id){
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
    std::cout <<"Name : "<< this->firstName << std :: endl;
    std::cout <<"Last Name : "<< this->lastName << std :: endl;
    std::cout <<"Nickname : "<< this->nickname << std :: endl;
    std::cout <<"ID : "<< this->id << std :: endl;
}


