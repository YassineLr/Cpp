# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include<iostream>

class Dog : public Animal {
    private :
        Brain *_brain;
    public :
        Dog();
        ~Dog();
        void makeSound() const;
        Dog(Dog const& obj);
        Dog& operator=(Dog const&obj);;
};

# endif