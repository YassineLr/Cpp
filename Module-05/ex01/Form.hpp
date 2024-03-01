# ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
        const std::string   _name;
        bool                _signed;
        const int           _gradeToBeSigned;
        const int           _gradeToBeExecuted;
    public :
        Form();
        Form(std::string name, int gradeToBeSigned, int gradeToBeExecuted);
        Form(const Form &form);
        Form& operator=(const Form &form);
        ~Form();
        
        std::string getName() const;
        bool        getSigned() const;
        int         getGradeToBeSigned() const;
        int         getGradeToBeExecuted() const;
        void        beSigned(Bureaucrat &bureaucrat);

        class GradeTooLowException : public std::exception {
            public :
                virtual const char * what() const throw() {
                    return ("Grade Too Low");
                }
        };
        class GradeTooHighException : public std::exception {
            public :
                virtual const char * what() const throw() {
                    return ("Grade Too High");
                }
        };
};

std::ostream& operator <<(std::ostream &os, const Form &form);
#endif