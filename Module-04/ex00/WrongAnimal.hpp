# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include<iostream>

class WrongAnimal{
    protected :
        std::string type;
    public :
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &obj);
        WrongAnimal& operator=(const WrongAnimal &obj);

        std::string getType() const;
        void setType(const std::string& newType);
        void makeSound(void) const; 
};

# endif