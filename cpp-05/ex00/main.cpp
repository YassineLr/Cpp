# include "Bureaucrat.hpp"

int main(){
    try {
        // Bureaucrat a("yassine", 190);
        Bureaucrat b("yassine", 130);
        Bureaucrat c("Veridis", 150);
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
        c.decrementGrade();
    }
    catch(std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}