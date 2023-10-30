# ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cstdlib>
#include <cstring>
class Contact{
    private:
        std :: string firstName;
        std :: string lastName;
        std :: string nickname;
        std :: string phoneNumber;
        std :: string darkSecret;
        int             id;
    public:
        Contact();
        Contact(std :: string firstName, std :: string lastName, std :: string nickname, std :: string phoneNumber,int id);
        void          printContact();
        std :: string getFirstName();
        std :: string getLastName();
        std :: string getNickname();
        std :: string getPhoneNumber();
        std :: string getDarkSecret();
        // void search_contact(int index);
        int           getid();
};

class Phonebook{

    private:
        Contact         contacts[8];
        int      contacts_counter;
    public:
        Phonebook();
        void add_contact();
        void search_contact();
        void exit_phonebook();
        void displayContacts();
        // void displayContacts()

};

bool isValidNumber(std :: string num);
bool isValidName(std::string str);

# endif
 