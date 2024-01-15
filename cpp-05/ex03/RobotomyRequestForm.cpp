# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", 72, 45){
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj):AForm(obj) {
    *this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &form){
    this->_signed = form.getSigned();
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if(executor.getGrade() > this->_gradeToBeExecuted)
        throw AForm::CannotExecuteExceprion();
    if (!this->getSigned())
        throw AForm::NotSignedException();
    srand(time(0));
    int random = rand();
    if(random%2){
        std::cout << this->_target << " has been robotomized successfull" << std::endl;
    } else {
        std::cout << this->_target << " has failed" << std::endl;
    }
}