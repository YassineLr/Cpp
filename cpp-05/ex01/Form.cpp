# include "Form.hpp"

Form::Form(std::string name ,int gradeToBeSigned, int gradeToBeExecuted):_name(name),_signed(false),_gradeToBeSigned(gradeToBeSigned),_gradeToBeExecuted(gradeToBeExecuted){
    if (gradeToBeExecuted > 150 || gradeToBeSigned > 150){
        throw GradeTooLowException();
    } else if (gradeToBeExecuted < 1 || gradeToBeSigned < 1) {
        throw GradeTooLowException();
    }
}

Form::Form(const Form &form):_name(form.getName()), _signed(form.getSigned()), _gradeToBeSigned(form.getGradeToBeSigned()), _gradeToBeExecuted(form.getGradeToBeExecuted()){
}

Form& Form::operator=(const Form &form){
    this->_name = form.getName();
    this->_signed = form.getSigned();
    return (*this);
}

Form::~Form(){

}

std::string Form::getName() const{
    return this->_name;
}

bool Form::getSigned() const {
    return this->_signed;
}

int Form::getGradeToBeSigned() const {
    return this->_gradeToBeSigned;
}

int Form::getGradeToBeExecuted() const {
    return this->_gradeToBeExecuted;
}

void Form::beSigned(Bureaucrat &bureaucrat){
    if (bureaucrat.getGrade() < this->getGradeToBeSigned()){
        this->_signed = true;
    }
    bureaucrat.signForm(*this);
}
