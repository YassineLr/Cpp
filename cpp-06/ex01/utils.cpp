# include "utils.hpp"
#include <stdlib.h>
#include <time.h> 

Base *generate(void){
    int random;

    srand(time(NULL));
    random = rand() % 3;
    switch (random)
    {
        case 0:
            std::cout << "A" << std::endl;
            return new A();
            break;
        
        case 1:
            std::cout << "B" << std::endl;
            return new B();
            break;
        case 2:
            std::cout << "C" << std::endl;
            return new C();
            break;
        default:
            return NULL;
    }
}

void identify(Base *p){
    if(dynamic_cast <A*>(p)){
        std::cout <<"A"<< std::endl;
    } else if(dynamic_cast <B*>(p)) {
        std::cout <<"B"<< std::endl;
    } else {
        std::cout <<"B"<< std::endl;
    }
}

void identify(Base &p){
    try
    {
        dynamic_cast <A&> (p);
        std::cout <<"A"<< std::endl;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
    }
    try
    {
        dynamic_cast <B&> (p);
        std::cout <<"B"<< std::endl;
        /* code */
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
    }
    try
    {
        dynamic_cast <C&>(p);
        std::cout << "C" <<std::endl;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
    }
    
    
    
}