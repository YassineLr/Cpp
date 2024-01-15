// # include "Form.hpp"
# include "Intern.hpp"
#
int main(){
    try {
        Intern someRandomIntern;
        AForm *rrf;
        ShrubberyCreationForm *tst = new ShrubberyCreationForm("hello");
        tst->getName();
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        rrf->getName();
    }
    catch(std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}