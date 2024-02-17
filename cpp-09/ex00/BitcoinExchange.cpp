# include "BitcoinExchange.hpp"

bool keyValid(std::string key){
    int year;
    int month;
    int day;

    if(key.length() != 10)
        return false;
    if(key[4] != '-' || key[7] != '-')
        return false;
    year = atoi(key.substr(0, 4).c_str());
    month = atoi(key.substr(5, 7).c_str());
    day = atoi(key.substr(8, 10).c_str());
    if(year < 2009 || year > 2022 || month > 12 || month < 1 || day > 30 || day < 1)
        return false;
    return true;
}

std::string parseKey(std::string key){
    std::string parsedKey;
    
    if(keyValid(key))
        return(key);
    throw std::runtime_error("Error: bad input => "+ key);
}

bool isOnlyDigits(std :: string str){
    int flag = 0;

    if(str[0] == '.' || str[str.length() - 1] == '.')
        return false;
    if (std::count(str.begin(), str.end() , '.') > 1)
        return false;

    for (size_t i = 0; i < str.size(); i++){

        if(!isdigit(str[i]) && (i != 0 && str[i] == '-')){
                return false;
        }
    } 
    return true;
}

float parseValue(std::string value){
    float     parsedValue;

    std::cout << "{" + value + "}" << std::endl;
    if (isOnlyDigits(value)){
        parsedValue = std::stof(value.c_str());
        if(parsedValue < 0)
            throw std::runtime_error("Error: not a positive number.");
        else if(parsedValue > 1000)
            throw std::runtime_error("Error: too big of a number.");
        return parsedValue;
    } else {
        throw std::runtime_error("Not a valid value");
    }
}

void BitcoinExchange::DataBaseParser(std::ifstream &os){
    std::string line;

    while (getline(os,line)) {
        data.insert(std::pair<std::string , std::string>(line.substr(0, line.find(",")), line.substr(line.find(",")+1, line.length())));
    }
}

void BitcoinExchange::inputParser(std::ifstream &os){
    std::string line;

    while (getline(os, line)) {
        parseOneLine(line);
    }
    
}

void lineAnalyzer(std::string line){
    int pipeIndex = line.find("|");
    int spaceIndex = line.find(" ");

    if (pipeIndex != 11 || spaceIndex != 10 || line.substr(spaceIndex+1, line.length()).find(" ") != 1)
        throw std::runtime_error("invalid line syntax !");
}

bool BitcoinExchange::parseOneLine(std::string line){
    std::string key;
    float value;
    
    try {
        lineAnalyzer(line);
        key = parseKey(line.substr(0, line.find("|")-1));
        value = parseValue(line.substr(line.find("|") + 2, line.length()));
        std::map<std::string , std::string>::iterator it = data.lower_bound(key);
        if(it->first != key)
            it--;
        std::cout << key << " => " << value << " = "<< std::stof(it->second) * value << std::endl;

    } catch( std::runtime_error &e){
        std::cout << e.what() << std::endl;
    } 
    return false;
}
