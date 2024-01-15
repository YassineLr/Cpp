# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 72, 45){
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj):AForm(obj) {
    *this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &form){
    this->_signed = form.getSigned();
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if(executor.getGrade() > this->_gradeToBeExecuted)
        throw AForm::CannotExecuteExceprion();
    if (!this->getSigned())
        throw AForm::NotSignedException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox."<< std::endl;
}