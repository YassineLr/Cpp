# ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
#include <fstream>  

class Bureaucrat;

class ShrubberyCreationForm : public AForm {
    private :
        std::string _target;
    public :
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &form);
        void execute(Bureaucrat const & executor) const ;
};

#endif