# ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A: public Base{
    public :
        void print(){
            std::cout << "hello" << std::endl;
        }
};

# endif