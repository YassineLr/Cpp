# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
int main(){
    try {
        // Bureaucrat a("yassine", 190);
        Bureaucrat b("yassine", 1);
        
        // a.decrementGrade();
        AForm *sh = new RobotomyRequestForm("ha");
        std::cout << sh->getName();
        sh->execute(b);
        std::cout << b << std::endl;
    }
    catch(std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}