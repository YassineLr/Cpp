# include "Serializer.hpp"

int main(){
    Data d;
    Data *l;
    char tet[sizeof(Data)];
    d._data = 13;
    uintptr_t a;

    std::memcpy(tet, &d, sizeof(Data));

    std::cout << *reinterpret_cast<int *>(tet) << std::endl;
    std::cout << *reinterpret_cast<int *>(tet + 4) << std::endl;
    // std::cout << d._data << std::endl;
    a = Serializer::serialize(&d);
    l = Serializer::deserialize(a);
    
    // std::cout << a << std::endl;
    // std::cout << l->_data << std::endl;
}