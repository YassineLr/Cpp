# include "AForm.hpp"

AForm::AForm(std::string name ,int gradeToBeSigned, int gradeToBeExecuted):_name(name),_signed(false),_gradeToBeSigned(gradeToBeSigned),_gradeToBeExecuted(gradeToBeExecuted){
    if (gradeToBeExecuted > 150 || gradeToBeSigned > 150){
        throw GradeTooLowException();
    } else if (gradeToBeExecuted < 1 || gradeToBeSigned < 1) {
        throw GradeTooHighException();
    }
}

AForm::AForm(const AForm &form):_name(form.getName()), _signed(form.getSigned()), _gradeToBeSigned(form.getGradeToBeSigned()), _gradeToBeExecuted(form.getGradeToBeExecuted()){
}

AForm& AForm::operator=(const AForm &Aform){
    this->_signed = Aform.getSigned();
    return (*this);
}

AForm::~AForm(){

}

std::string AForm::getName() const{
    return this->_name;
}

bool AForm::getSigned() const {
    return this->_signed;
}

int AForm::getGradeToBeSigned() const {
    return this->_gradeToBeSigned;
}

int AForm::getGradeToBeExecuted() const {
    return this->_gradeToBeExecuted;
}

void AForm::beSigned(Bureaucrat &bureaucrat){
    if (bureaucrat.getGrade() <= this->getGradeToBeSigned()){
        this->_signed = true;
    }
    else
        throw AForm::GradeTooLowException();
}
