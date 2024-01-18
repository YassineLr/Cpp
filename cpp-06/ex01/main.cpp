# include "utils.hpp"

int main(){
    Base *b = new C();

    identify(*b);
    delete b;
}