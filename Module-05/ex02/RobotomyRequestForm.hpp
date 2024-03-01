# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include<cstdlib>

class Bureaucrat;

class RobotomyRequestForm : public AForm {
    private :
        std::string _target;
    public :
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &obj);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &form);
        void execute(Bureaucrat const & executor) const;
};

# endif