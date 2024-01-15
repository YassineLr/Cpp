# include "Intern.hpp"

Intern::Intern(){
    this->forms[0] = "shrubbery creation";
    this->forms[1] = "presidential pardon";
    this->forms[2] = "robotomy request";
}

Intern::Intern(Intern const &obj){
 
}

Intern::~Intern(){

}

Intern& Intern::operator=(Intern const &obj){
    return *this;
}

AForm *Intern::makeForm(std::string FormName, std::string target){
    size_t i;
    for (i = 0; i < 3; i++){
        if (!this->forms[i].compare(FormName)){
            break;
        }
    }
    std::cout << i ;
    switch (i)
    {
        case 0:
            std::cout<<"here 0";
            return new ShrubberyCreationForm(target);
            break;
        case 1:
            std::cout<<"here 1";
            return new PresidentialPardonForm(target);
        case 2:
            std::cout<<"here 2";
            return new RobotomyRequestForm(target);
        default:
            throw Intern::InvalidFormException();
            break;
    }
}
