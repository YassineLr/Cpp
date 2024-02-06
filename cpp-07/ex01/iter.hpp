# ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void func(T a){
    std::cout << a << std::endl;
};

template <typename T, typename Func>
void iter(T *add, size_t length, Func f){
    for (size_t i = 0; i < length; i++){
        f(add[i]);
    }
};
# endif