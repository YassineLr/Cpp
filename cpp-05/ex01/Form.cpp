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
    try{
        if (bureaucrat.getGrade() < this->getGradeToBeSigned()){
            this->_signed = true;
        }
        bureaucrat.signForm(*this);
    } catch(std::exception &e){
        std::cerr << bureaucrat.getName() << " couldn't sign " << this->getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator <<(std::ostream &os, const Form &form){
    os << "Form Name :" <<form.getName() << std::endl << "grade required to be signed : " << form.getGradeToBeSigned() << std::endl << "grade required to be executed : " << form.getGradeToBeExecuted();
    return os;
}
