# include "RPN.hpp"

RPN::RPN(){

}

RPN::~RPN(){

}

bool isOperator(std::string a){
    if(a == "*" || a == "+" || a == "-" || a == "/")
        return true;
    return false;
}

bool RPN::rpnOperation(std::string line){
    char *token;

    token = strtok((char *)line.c_str(), " ");
    while (token)
    {
        std::string stoken(token);
        if (stoken.find_first_not_of("0123456789+*-/ ") != std::string::npos || stoken.length() > 1)
            throw std::runtime_error("ERROR");
        if(!isOperator(stoken)){
            numbers.push(atoi(stoken.c_str()));;
        } else {
            if (numbers.size() < 2)
                throw std::runtime_error("ERROR");
            else {
                int sOperand = numbers.top();
                numbers.pop();
                int fOperand = numbers.top();
                numbers.pop();
                if (stoken == "+") {
                    numbers.push(fOperand + sOperand);
                } else if(stoken == "-") {
                    numbers.push(fOperand - sOperand);
                } else if(stoken == "*") {
                    numbers.push(fOperand * sOperand);
                } else {
                    if (sOperand == 0)
                        throw std::runtime_error("impossible division by zero");
                    numbers.push(fOperand / sOperand);
                }
            }
        }
        token = strtok(NULL , " ");
    }
    return true;      
}

void RPN::pushToStack(std::string token){
    int itoken;

    itoken = atoi(token.c_str());
    numbers.push(itoken);
}

void RPN::checkResult(){
    if(numbers.size() != 1)
        throw std::runtime_error("ERROR");
    std::cout << numbers.top() << std::endl;
}

void RPN::rpn(std::string line){
    try {
        rpnOperation(line);
        checkResult();
    } catch (const std::runtime_error &e) {
        std::cerr << e.what() << '\n';
    }
}