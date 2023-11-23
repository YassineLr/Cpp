# ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Brain.hpp"
# include "Animal.hpp"

class Cat:public Animal {
    private :
        Brain *_brain;
    public :
        Cat();
        ~Cat();
        void makeSound() const;
        Cat(Cat const& obj);
        Cat& operator=(Cat const&obj);
};

# endif