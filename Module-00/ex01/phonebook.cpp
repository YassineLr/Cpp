/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 05:45:53 by ylarhris          #+#    #+#             */
/*   Updated: 2023/10/31 22:47:20 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

Phonebook :: Phonebook(){
    this->contacts_counter = 0;
}

void Phonebook :: search_contact(){
    std :: string sIndex;
    int           index;

    if(!this->contacts_counter){
        std :: cout << "The Phonebook is empty try to add contacts first :"<< std::endl;
        return ;
    }
    this->displayContacts();
    do{
        std :: cout << "choose the index of contact you want to search : ";
        getline(std :: cin , sIndex);
        if(std :: cin.eof())
            exit(1);
    } while(isEmpty(sIndex));
    index = stringToInt(sIndex);
    if(index >= this->contacts_counter || index < 0){
        std::cout <<"Invalid Index !"<< std::endl;
        return ;
    }
    else if(this->contacts_counter >= 1)
        this->contacts[index].printContact();
}

void Phonebook::displayContacts() {
    int count;
    std::cout << this->contacts_counter << std::endl;

    if (this->contacts_counter >= 8)
        count = 8;
    else
        count = this->contacts_counter % 8;

    std::cout << count << std::endl;

    std::cout << std::setw(11) << "Index|" << std::setw(11) << "First Name|" << std::setw(11) << "Last Name|" << std::setw(11) << "Nickname|" << std::endl;

    for (int i = 0; i < count; i++) {
        std::string firstName = contacts[i].getFirstName();
        std::string lastName = contacts[i].getLastName();
        std::string nickName = contacts[i].getNickname();

        firstName = (firstName.length() > 10) ? firstName.substr(0, 9) + "." : firstName;
        lastName = (lastName.length() > 10) ? lastName.substr(0, 9) + "." : lastName;
        nickName = (nickName.length() > 10) ? nickName.substr(0, 9) + "." : nickName;

        std::cout << std::setw(10) << contacts[i].getid() << "|" << std::setw(11) << firstName + "|"<< std::setw(11) << lastName +"|" << std::setw(11) << nickName+"|"<< std::endl;
    }
}

void Phonebook :: add_contact(){
    std :: string firstName;
    std :: string lastName;
    std :: string nickname;
    std :: string phoneNumber;
    std :: string darkSecret;
    bool             faillure = false;
    do
    {
        if (faillure == false)
            std :: cout << "The first Name : ";
        else
            std :: cout << "Error ! type a valid name : ";
        faillure = true;
        getline(std :: cin , firstName);
        if(std ::cin.eof())
            exit(1);
    } while (!isValidName(firstName));
    faillure = 0;
    do
    {
        if (faillure == false)
            std :: cout << "The last Name : ";
        else 
            std :: cout << "Error ! please type a valid name : ";
        faillure = true;
        getline(std :: cin , lastName);
        if(std ::cin.eof())
            exit(1);
    } while (!isValidName(lastName));
    faillure = 0;
    do
    {
        if (faillure == false)
            std :: cout << "The Nickname : ";
        else 
            std :: cout << "this field is required ! Enter a nickname : ";
        faillure = true;
        getline(std :: cin , nickname);
        if(std ::cin.eof())
            exit(1);
    } while (isEmpty(nickname));
    faillure = 0;
    do
    {
        if (faillure == 0)
            std :: cout << "Your Number : ";
        else 
            std :: cout << "Enter a valid Phonenumber : ";
        faillure = true;
        getline(std :: cin, phoneNumber);
        if(std ::cin.eof())
            exit(1);

    } while (!isValidNumber(phoneNumber));
    faillure = false;
    do
    {
        if (faillure == false)
            std :: cout << "Dark secret : ";
        else 
            std :: cout << "this field is required ! Enter a Dark secret : ";
        faillure = true;
        getline(std :: cin , darkSecret);
        if(std ::cin.eof())
            exit(1);
    } while (isEmpty(darkSecret));
    Contact contact = Contact(firstName, lastName, nickname, phoneNumber,darkSecret, this->contacts_counter % 8);
    this->contacts[this->contacts_counter % 8] = contact;
    this->contacts_counter++;
}

void Phonebook::exit_phonebook(){
    std::cout <<"SEE YOU AGAIN !"<<std ::endl;
    exit(0);
}
