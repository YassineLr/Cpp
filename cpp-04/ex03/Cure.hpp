# ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
    public :
        Cure();
        Cure(Cure& obj);
        ~Cure();
        void use(ICharacter &taget);
        Cure &operator=(const Cure &obj);
        AMateria* clone( void ) const;
};

# endif