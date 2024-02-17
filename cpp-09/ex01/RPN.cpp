# include "RPN.hpp"

RPN::RPN(){

}

RPN::~RPN(){

}

bool isValidLine(std::string line){
    int found = line.find_first_not_of("0123456789+*-/ ");
    if(found)
        throw std::runtime_error("ERROR");
    for (size_t i = 0; i < line.length(); i++){
        if (isdigit(line[i]) && isdigit(line[i+1]))
            throw std::runtime_error("ERROR");
    }
    return true;
}

bool isOperator(char a){
    if(a == '*' || a == '+' || a == '-' || a == '/')
        return true;
    return false;
}
void RPN::parser(std::string line){
    isValidLine()
}