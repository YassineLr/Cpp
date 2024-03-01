/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 05:45:42 by ylarhris          #+#    #+#             */
/*   Updated: 2023/10/31 22:45:09 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
        Contact(std :: string firstName, std :: string lastName, std :: string nickname, std :: string phoneNumber, std :: string darkSecret,int id);
        void          printContact();
        std :: string getFirstName();
        std :: string getLastName();
        std :: string getNickname();
        std :: string getPhoneNumber();
        std :: string getDarkSecret();
        int           getid();
};
