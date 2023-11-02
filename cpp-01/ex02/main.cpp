/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:17:53 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/02 10:23:56 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(){
    std :: string str = "HI THIS IS BRAIN";
    std :: string *stringPTR = &str;
    std::string& stringREF = str;
    

    std::cout << &str << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
}