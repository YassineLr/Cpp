# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm(){
    
}

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm", 145, 137), _target("unnamed"){

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm", 145, 137){
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj):AForm(obj) {
    *this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form){
    this->_signed = form.getSigned();
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if(executor.getGrade() > this->_gradeToBeExecuted)
        throw AForm::CannotExecuteException();
    if (!this->getSigned())
        throw AForm::NotSignedException();
    std::string fileName(this->_target + "_shruberry");
    std::ofstream outfile (fileName.c_str());
    if(outfile.is_open()){
        outfile << "       _-_"<< std::endl;
        outfile << "    /~~   ~~\\"<< std::endl;
        outfile << " /~~         ~~\\"<< std::endl;
        outfile << "{               }"<< std::endl;
        outfile << " \\  _-     -_  /"<< std::endl;
        outfile << "   ~  \\ //  ~"<< std::endl;
        outfile << "_- -   | | _- _"<< std::endl;
        outfile << "  _ -  | |   -_"<< std::endl;
        outfile << "      // \\"<< std::endl;
    }
}