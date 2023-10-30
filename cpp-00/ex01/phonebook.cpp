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

void Phonebook :: search_contact(){
    int index;
    this->displayContacts();
    std :: cout << "choose the index of contact you want to search : ";
    std :: cin >> index ;
    // std :: cin;
    if(index > this->contacts_counter){
        std::cout <<"The index is out range !"<< std::endl;
        return ;
    }
    else if(this->contacts_counter >= 1)
        this->contacts[index].printContact();
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
    int             faillureCounter = 0;
    do
    {
        if (faillureCounter == 0)
            std :: cout << "The first Name : ";
        else
            std :: cout << "Error ! type a valid name : ";
        faillureCounter++;
        getline(std :: cin , firstName);
        if(!isValidName(firstName) && faillureCounter >= 3)
            return ;

    } while (!isValidName(firstName));
    faillureCounter = 0;
    do
    {
        if (faillureCounter == 0)
            std :: cout << "The last Name : ";
        else 
            std :: cout << "Error ! please type a valid name : ";
        faillureCounter++;
        getline(std :: cin , lastName);
        if(!isValidName(lastName) && faillureCounter >= 3)
            return ;
    } while (!isValidName(lastName));
    std :: cout << "Your Nickname : ";
    getline(std :: cin , nickname);
    faillureCounter = 0;
    do
    {
        if (faillureCounter == 0)
            std :: cout << "Your Number : ";
        else 
            std :: cout << "Enter a valid Phonenumber : ";
        faillureCounter++;
        getline(std :: cin, phoneNumber);
        if(!isValidNumber(phoneNumber) && faillureCounter >= 3)
            return ;
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
            book.search_contact();
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