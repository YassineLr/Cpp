# include "Intern.hpp"

Intern::Intern(){
    this->forms[0] = "shrubbery creation";
    this->forms[1] = "presidential pardon";
    this->forms[2] = "robotomy request";
}

Intern::Intern(Intern const &obj){
    *this = obj;
}

Intern::~Intern(){

}

Intern& Intern::operator=(Intern const &obj){
    this->forms[0] = obj.forms[0];
    this->forms[1] = obj.forms[1];
    this->forms[2] = obj.forms[2];
    return *this;
}

AForm *Intern::makeForm(std::string FormName, std::string target){
    size_t i;
    for (i = 0; i < 3; i++){
        if (!this->forms[i].compare(FormName)){
            std::cout << "Intern creates " << FormName << std::endl;
            break;
        }
    }
    switch (i)
    {
        case 0:
            return new ShrubberyCreationForm(target);
            break;
        case 1:
            return new PresidentialPardonForm(target);
        case 2:
            return new RobotomyRequestForm(target);
        default:
            throw Intern::InvalidFormException();
            break;
    }
}
