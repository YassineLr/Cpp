# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* Wrongmeta = new WrongAnimal();
    // const WrongAnimal* Wrongj = new Dog();
    const WrongAnimal* Wrongi = new WrongCat();
    const Dog *doggy = new Dog();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << Wrongmeta->getType() << " " << std::endl;
    std::cout << Wrongi->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    Wrongmeta->makeSound(); //will output the cat sound!
    Wrongi->makeSound();
    doggy->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    delete Wrongmeta;
    delete Wrongi;
    return 0;
}