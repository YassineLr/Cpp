# ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
    protected :
        const std::string _name;
        bool        _signed;
        const int   _gradeToBeSigned;
        const int   _gradeToBeExecuted;
    public :
        AForm();
        AForm(std::string name, int gradeToBeSigned, int gradeToBeExecuted);
        AForm(const AForm &AForm);
        AForm& operator=(const AForm &AForm);
        virtual ~AForm();
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
        class NotSignedException : public std::exception {
            public :
                virtual const char * what() const throw(){
                    return ("Form is not signed");
                }
        };
        class CannotExecuteException : public std::exception {
            public :
                virtual const char * what() const throw(){
                    return ("Grade is lower than execution grade");
                }
        };
        virtual void execute(Bureaucrat const & executor) const = 0;
};
std::ostream& operator <<(std::ostream &os, const AForm &form);
#endif