# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal {
    public :
        WrongCat();
        ~WrongCat();
        void makeSound() const;
        WrongCat(WrongCat const& obj);
        WrongCat& operator=(WrongCat const&obj);
};

# endif