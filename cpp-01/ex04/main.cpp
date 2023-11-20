/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinelr <yassinelr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:27:11 by ylarhris          #+#    #+#             */
/*   Updated: 2023/11/19 23:00:15 by yassinelr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

#include <string>

std :: string getNewLine(std::string line , std::string  toFind , std::string toReplaceWith){
    int pos;
    std::string newLine;
    
    while (1)
    {
        pos = line.find(toFind);
        if(pos == -1){
            newLine = newLine + line;
            return(newLine);
        }
        newLine = newLine +line.substr(0, pos) + toReplaceWith;
        line = line.substr(pos + toFind.length());
    }
}

int main(int ac, char **av){
    std::ofstream outFile;
    std::string     line;
    std::string     after;
    std::string     before;
    std::string     extension= ".replace";
    std::string     newFile;
    
    if(ac != 4){
        std::cerr <<"INVALID ARGUMENTS"<<std::endl;
        std::cerr << "Instructions to run the programme : ./sed outfilename to_replace to_replace_with"<<std::endl;
        return (1);
    }
    std::ifstream inFile(av[1]);
    std::string     toFind(av[2]);
    std::string     toReplaceWith(av[3]);
    if(toFind.empty())
        return 1;
    if(!inFile.is_open()){
        std::cerr << "file cannot open !" << std::endl;
        return 1;
    }
    newFile = av[1] + extension;
    outFile.open(newFile.c_str());
    if(!outFile.is_open()){
        std::cerr << "file cannot open !" << std::endl;
        return 1;
    }
    while(getline(inFile, line)){
        std :: string newLine = getNewLine(line, toFind, toReplaceWith);
        outFile << newLine << std::endl;
    }
    inFile.close();
    outFile.close();
}
