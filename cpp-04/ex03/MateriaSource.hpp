# ifndef MATERIASOURCE
# define MATERIASOURCE

# include "IMateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class MateriaSource : public IMateriaSource{
    private:
        AMateria *m[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &obj);
        MateriaSource(MateriaSource &obj);
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const & type);
};

# endif