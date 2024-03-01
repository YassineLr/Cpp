# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
    Animal *animal[2];

    for (size_t i = 0; i < 2; i++){
        if(i%2){
            animal[i] = new Dog();
        } else {
            animal[i] = new Cat();
        }
    }
    // for (size_t i = 0; i < 2; i++){
    //     animal[i]->makeSound();
    // }
    for (size_t i = 0; i < 2; i++){
        delete animal[i];
    }
}

// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     delete j;//should not create a leak
//     delete i;
//     return 0;
// }