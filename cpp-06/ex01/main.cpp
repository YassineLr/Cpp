# include "utils.hpp"

int main(){
    Base *b = new C();

    identify(*b);
    Base *c = new Base();
    A* a = dynamic_cast <A*>(c);
    
    delete b;
}