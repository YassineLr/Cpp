/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:27:11 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/04 08:04:55 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av){
    std::ifstream inFile(av[1]);
    std::ofstream outFile;
    std::string     toFind(av[2]);
    std::string     line;
    std::string     after;
    std::string     before;
    std::string     extension= ".replace";
    std::string     newFile;
    int             found;
    
    if(ac != 4){
        std::cerr <<"INVALID ARGUMENTS"<<std::endl;
        std::cerr << "Instructions to run the programme : ./sed outfilename to_replace to_replace_with"<<std::endl;
        return (1);
    }
    if(toFind.empty())
        return 1;
    newFile = av[1] + extension;
    outFile.open(newFile.c_str());
    if(!inFile.is_open() || !outFile.is_open()){
        std::cerr << "file cannot open !" << std::endl;
        return 1;
    }
    while(getline(inFile, line)){
        while (1){
            found = line.find(av[2]);
            if(found == -1)
                break;
            before = line.substr(0, found);
            after = line.substr(found+strlen(av[2]), line.length());
            line = before + av[3] + after;
        }
        outFile << line << std::endl;
    }
    inFile.close();
    outFile.close();
}