# include "utils.hpp"

int main(){
    Base *b = generate();

    C c;

    identify(*b);
    identify(b);
    
    delete b;
}