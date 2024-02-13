# include "BitcoinExchange.hpp"

std::map<std::string ,int> keyValid(std::string key){
    std::map<std::string ,int> date;

    date.insert(std::pair<std::string , int>(std::string("year"),atoi(key.substr(0, 4).c_str())));
    date.insert(std::pair<std::string , int>(std::string("year"),atoi(key.substr(5, 7).c_str())));
    date.insert(std::pair<std::string , int>(std::string("year"),atoi(key.substr(8, 10).c_str())));
    // if(year < 2009 || year > 2022 || month > 12 || month < 1 || day > 30 || day < 1)
    //     return false;
    // std::cout << year << " "<< month << " " << day <<std::endl;
    return true;
}

std::string parseKey(std::string key){
    std::string 
    if(keyValid(key)){

    }
    return key;
}


std::string parseValue(std::string value){

    return value;
}
void BitcoinExchange::DataBaseParser(std::ifstream &os){
    std::string line;

    while (getline(os,line)) {
        data.insert(std::pair<std::string , std::string>(line.substr(0, line.find(",") - 1), line.substr(line.find(","), line.length())));
    }
}

void BitcoinExchange::inputParser(std::ifstream &os){
    std::string line;

    while (getline(os, line)) {
        parseOneLine(line);
    }
    
}

bool parseOneLine(std::string line){
    std::string key;
    std::string value;

    key = parseKey(line.substr(0, line.find("|")));
    value = parseValue(line.substr(line.find("|") + 1, line.length()));

    std::cout << key << " val :" << value << std::endl;
    return false;
}
