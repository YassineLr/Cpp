# include "RPN.hpp"

int main(int ac, char **av){
    RPN rpn;

    try
    {
        rpn.parser(av[1]);
        std::cout << "hey";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}