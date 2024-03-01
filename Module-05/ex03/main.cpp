# include "Intern.hpp"
int main(){
    Intern someRandomIntern;
    AForm* rrf;
    try{
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
