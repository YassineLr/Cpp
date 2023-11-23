# include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constructor called"<<std::endl;
}
Brain& Brain::operator=(const Brain& obj) {
    if (this != &obj) {
        for (int i = 0; i < 100; i++) {
            this->_ideas[i] = obj._ideas[i];
        }
    }
    return *this;
}

Brain::Brain(const Brain& obj) {
    *this = obj;
}

Brain::~Brain(){
    std::cout << "Brain destructor called"<<std::endl;
}