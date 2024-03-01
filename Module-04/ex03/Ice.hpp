# ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
    public :
        Ice();
        Ice(Ice& obj);
        ~Ice();
        void use(ICharacter &taget);
        Ice &operator=(const Ice &obj);
        AMateria* clone( void ) const;
};

# endif