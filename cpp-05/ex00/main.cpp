# include "Bureaucrat.hpp"

int main(){
    try {
        Bureaucrat a("yassine", 190);
        Bureaucrat b("yassine", 130);
        a.decrementGrade();
        std::cout << b << std::endl;
    }
    catch(std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}