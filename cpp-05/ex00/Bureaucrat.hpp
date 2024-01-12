# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include<iostream>

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat &obj);
        Bureaucrat(const Bureaucrat &obj);
        int getGrade() const;
        std::string getName() const;
        void incrementGrade();
        void decrementGrade();
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