/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:17:53 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/08 16:28:34 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(){
    std :: string str = "HI THIS IS BRAIN";
    std :: string *stringPTR = &str;
    std::string& stringREF = str;
    
    std::cout << "The adress held by the string using :" << std::endl;
    std::cout <<"The string : "<< &str << std::endl;
    std::cout <<"The Pointer : "<< stringPTR << std::endl;
    std::cout <<"The Reference : "<< &stringREF << std::endl;
    std::cout <<"" <<std::endl;
    std::cout << "Displaying the string using :" << std::endl;
    std::cout <<"The string : "<< str << std::endl;
    std::cout <<"The Pointer : "<< *stringPTR << std::endl;
    std::cout <<"The Reference : "<< stringREF << std::endl;
}