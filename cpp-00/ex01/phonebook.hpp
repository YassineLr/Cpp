/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 05:45:37 by ylarhris          #+#    #+#             */
/*   Updated: 2023/10/31 07:47:54 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"
# include <cstdlib>
# include <cstring>
# include <iomanip>

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
};

bool    isValidNumber(std :: string num);
bool    isValidName(std::string str);
bool    isEmpty(std :: string str);
int     stringToInt(const std::string str);
bool    isOnlyDigits(std :: string str);
std :: string strToUpper(std :: string str);

# endif
 