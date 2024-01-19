# ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>

void func(T a){
    std::cout << a << std::endl;
};

template <typename T>
void iter(T *add, int length, void (func)(T a)){
    for (int i = 0; i < length; i++){
        func(add[i]);
    }
};

class Test{
    private:
        std::string Name;
    public:
        std::string getName() const {
            return this->Name;
        };
        void   setName(std::string name){
            this->Name = name;
        }
        Test(){};
        Test(std::string name){
            this->Name = name;
        };
};

std::ostream& operator <<(std::ostream &os, const Test &t);
# endif