# include "phonebook.hpp"


std :: string strToUpper(std :: string str){
    for (size_t j = 0; j < str.size() ; j++){
        str[j] = toupper(str[j]);
    }
    return str;
}

Phonebook :: Phonebook(){
    this->contacts_counter = 0;
}

void Phonebook :: search_contact(int index){
    this->displayContacts();
    if(index > this->contacts_counter){
        std::cout <<"The index is out range !"<< std::endl;
        return ;
    }
    else if(this->contacts_counter >= 1)
        this->contacts[index-1].printContact();
}
void Phonebook::displayContacts(){
	std::cout << "Index\tFirst Name\tLast Name\tNick Name" << std::endl;

	for (int i = 0; i < this->contacts_counter ; i++)
	{
		std::string firstName = contacts[i].getFirstName();
		std::string lastName = contacts[i].getLastName();
		std::string nickName = contacts[i].getNickname();
		if (firstName.length() > 10)
			firstName = firstName.substr(0, 9) + ".";
		if (lastName.length() > 10)
			lastName = lastName.substr(0, 9) + ".";
		if (nickName.length() > 10)
			nickName = nickName.substr(0,9) + ".";
		std::cout << i << "\t" << firstName << "\t\t" << lastName << "\t" << nickName << std::endl;
	}
}

void Phonebook :: add_contact(){
    int index;
    std :: string firstName;
    std :: string lastName;
    std :: string nickname;
    std :: string phoneNumber;
    std :: string darkSecret;
    int             count = 0;
    do
    {
        if (count == 0)
            std :: cout << "The first Name : ";
        else
            std :: cout << " ERROOR type a valid name : ";
        count++;
        getline(std :: cin , firstName);
        if(!isValidName(firstName) && count >= 3)
            return ;

    } while (!isValidName(firstName));
    count = 0;
    do
    {
        std :: cout << "The last Name : ";
        getline(std :: cin , lastName);
    } while (!isValidName(lastName));
    std :: cout << "Your Nickname : ";
    getline(std :: cin , nickname);
    do
    {
        std :: cout << "Your Number : ";
        getline(std :: cin, phoneNumber);
    } while (!isValidNumber(phoneNumber));
    std :: cout << "Enter a dark secret : ";
    getline(std:: cin , darkSecret);
    Contact contact = Contact(firstName, lastName, nickname, phoneNumber,this->contacts_counter % 8);
    this->contacts[this->contacts_counter % 8] = contact;
    this->contacts_counter++;
}

void Phonebook::exit_phonebook(){
    std::cout <<"adios amigo !"<<std ::endl;
    exit(0);
}

// void Phonebook :: displayContacts(){
//     int count;

//     // std :: cout <<"Im here !"<< std::endl;
//     if(this->contacts_counter <= 8)
//         count = this->contacts_counter;
//     else
//         count = 8;
//     for (size_t i = 0; i < count; i++){
//         this->contacts[i].printContact();
//         std :: cout << "--------------------------" << std::endl;
//     }
    
// }


int main(int ac, char **av){
    Phonebook book ;
    std :: string command;

    std :: cout << "------- Hello-----------" << std::endl;
    std :: cout <<" - ADD"<<std:: endl;
    std :: cout <<" - SEARCH"<<std:: endl;
    std :: cout <<" - EXIT"<<std:: endl;

    while (1)
    {
        std :: cout <<"Choose a Command "<<std :: endl;
        getline(std :: cin, command);
        // command = strToUpper(command);
        if(!command.compare("ADD")){
            book.add_contact();
        }
        else if(!command.compare("SEARCH")){
            book.search_contact(2);
        }
        else if(!command.compare("EXIT")){
            book.exit_phonebook();
        }
        else {
            std :: cout <<"This command is not found !"<< std::endl;
        }
    }
    
    
    // book.search_contact(1);
    // book.exit_phonebook();
    book.displayContacts();
    // book.contacts_counter = 0;
    // book.contacts[0].printContact();
    // book.contacts[1].printContact();
}