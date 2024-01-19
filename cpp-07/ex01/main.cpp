# include "iter.hpp"


std::ostream& operator <<(std::ostream &os, const Test &t){
    os<<"Test name :" << t.getName();
    return os;
}

int main(){
    int t[5] = {1,2,57,87,78};
    ::iter(t, 5, func);

    std::string name("yaa");
    Test a[3];
    for (size_t i = 0; i < 3; i++){
        name = name+"ka";
        a[i].setName(name);
    }
    iter(a, 3, func);
}