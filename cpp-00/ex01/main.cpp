/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 05:45:29 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/01 00:55:29 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

std :: string strToUpper(std :: string str){
    for (size_t j = 0; j < str.size() ; j++){
        str[j] = toupper(str[j]);
    }
    return str;
}

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

bool isOnlyDigits(std :: string str){
    for (size_t i = 0; i < str.size(); i++){
        if(!isdigit(str[i])){
            return false;
        }
    }
    return true;
}

bool isValidNumber(std :: string num){
    if(isEmpty(num) || num.size() >10 || !isOnlyDigits(num))
        return false;
    return true;
}

int stringToInt(const std::string str) {
    const char* cstr = str.c_str();
    int result = atoi(cstr);
    
    if ((result == 0 && str != "0" && cstr[0] != '0') || !isOnlyDigits(str))
        return -1;
    return result;
}

int main(int ac, char **av){
    Phonebook book ;
    std :: string command;
    std :: string tmp;
    
    (void)av;
    if(ac > 1)
    {
        std :: cout << "Invalid Argument ! try to don't enter any argument" << std :: endl;
        return 0;
    }
    std :: cout << "****** WELCOME TO PHONEBOOK ******" << std::endl;
    while (1)
    {
        std :: cout <<"******** Choose a Command ********"<<std :: endl;
        std :: cout <<" - ADD"<<std:: endl;
        std :: cout <<" - SEARCH"<<std:: endl;
        std :: cout <<" - EXIT"<<std:: endl;
        std :: cout << "Command : ";
        getline(std :: cin, command);
        if(std ::cin.eof())
            exit(1);
        else if (command != "ADD" && command != "SEARCH" && command != "EXIT")
            continue;
        else if(!command.compare("ADD")){
            book.add_contact();
        }
        else if(!command.compare("SEARCH")){
            book.search_contact();
        }
        else if(!command.compare("EXIT") || !command.compare("")){
            book.exit_phonebook();
        }
        std :: cout << "Press a Enter to continue ... ";
        getline(std::cin , tmp);
    }
}