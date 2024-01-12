# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){

}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){
    if (grade < 1)
        throw(Bureaucrat::GradeToHigh());
    else if (grade > 150)
        throw(Bureaucrat::GradeToLow());
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj){
    this->_grade = obj._grade;
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj):_name(obj.getName()),_grade(obj.getGrade()){

}

int Bureaucrat::getGrade() const{
    return (this->_grade);
}

std::string Bureaucrat::getName() const{
    return (this->_name);
}

void Bureaucrat::incrementGrade(){
    if(this->_grade <= 1)
        throw(Bureaucrat::GradeToHigh());
    this->_grade--;
}


void Bureaucrat::decrementGrade(){
    if(this->_grade > 149)
        throw(Bureaucrat::GradeToLow());
    this->_grade++;
}

std::ostream& operator <<(std::ostream &os, const Bureaucrat &Bureaucrat){
    os<< Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
    return os;
}
