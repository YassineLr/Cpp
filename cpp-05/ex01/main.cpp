# include "Form.hpp"

int main(){
    try {
        Bureaucrat b("yassine", 130);
        Form form("cdi", 140, 140);
        Form form1("cdd", 15, 15);
        std::cout << b << std::endl;
        std::cout << form << std::endl;
        form1.beSigned(b);
        form.beSigned(b);
    }
    catch(std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}