# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include<iostream>
# include "Form.hpp"
class Form;
class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat& operator=(const Bureaucrat &obj);
        ~Bureaucrat();

        int         getGrade() const;
        std::string getName() const;
        void        incrementGrade();
        void        decrementGrade();
        void        signForm(Form &form);

        class GradeToHigh : public std::exception
        {
            public:
                virtual char const * what() const throw(){
                    return ("Grade to high");
                };
        };
        
        class GradeToLow : public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("Grade to low");
                }
        };
};

std::ostream& operator <<(std::ostream &os, const Bureaucrat &Bureaucrat);

# endif