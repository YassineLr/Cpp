# include "RPN.hpp"

int main(int ac, char **av){
    RPN rpn;

    if(ac == 2){
        rpn.rpn(av[1]);
    } else {
        std::cerr << "Invalid Arguments" << std::endl;
    }
}