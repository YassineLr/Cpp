# ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include "AForm.hpp"
# include<cstdlib>

class Bureaucrat;

class PresidentialPardonForm : public AForm {
    private :
        std::string _target;
    public :
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &obj);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &form);
        void execute(Bureaucrat const & executor) const;
};

# endif