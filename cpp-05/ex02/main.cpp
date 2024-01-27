# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
int main(){
    try {
        // Bureaucrat a("yassine", 190);
        Bureaucrat b("yassine", 46);
        
        AForm *rrf = new RobotomyRequestForm("rr");
        AForm *scf = new ShrubberyCreationForm("sh");
        AForm *ppf = new PresidentialPardonForm("pp");

        std::cout << *rrf << std::endl;
        std::cout << *scf << std::endl;
        std::cout << *ppf << std::endl;
        
        std::cout << b << std::endl;
        b.signForm(*rrf);
        b.executeForm(*rrf);
        b.signForm(*scf);
        b.executeForm(*scf);
        b.signForm(*ppf);
        b.executeForm(*ppf);
        
        delete rrf;
        delete scf;
        delete ppf;
    }
    catch(std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}