# ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
        std::string forms[3];
	public:
		Intern();
		Intern(Intern const& obj);
		AForm* makeForm(std::string Formn, std::string target);
		Intern& operator=(Intern const& obj);
		class InvalidFormException : public std::exception
		{	public:
				const char * what() const throw(){
                    return "Form does not exist";
                };
        };
		~Intern();
};

# endif