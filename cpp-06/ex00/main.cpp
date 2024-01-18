# include "Serializer.hpp"

int main(){
    Data d;
    Data *l;
    d._data = 13;
    uintptr_t a;
    std::cout << d._data << std::endl;
    a = Serializer::serialize(&d);
    l = Serializer::deserialize(a);
    std::cout << a << std::endl;
    std::cout << l->_data << std::endl;
}