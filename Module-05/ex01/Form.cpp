# include "Form.hpp"

Form::Form():_name("Default"), _signed(false), _gradeToBeSigned(150), _gradeToBeExecuted(150){

}

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
    if (bureaucrat.getGrade() <= this->getGradeToBeSigned()){
        this->_signed = true;
    } else {
        throw Form::GradeTooLowException();
    }
}

std::ostream& operator <<(std::ostream &os, const Form &form){
    os << "Form Name :" <<form.getName() << std::endl << "grade required to be signed : " << form.getGradeToBeSigned() << std::endl << "grade required to be executed : " << form.getGradeToBeExecuted();
    return os;
}
