/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:03:22 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/04 11:52:43 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "harlFilter.hpp"

int main(int ac, char **av){
    HarlFilter filter;

    if(ac != 2 ){
        std::cout << "Invalid arguments!\n INSTRUCTIONS \n please run the program as below \n./harlFilter level" <<std::endl;
    }
    filter.complain(av[1]);
}