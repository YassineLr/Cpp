# include "MateriaSource.hpp"


MateriaSource::MateriaSource(){
    for (size_t i = 0; i < 4; i++){
        this->m[i] = NULL;
    }
}

MateriaSource::~MateriaSource(){
    for (size_t i = 0; i < 4; i++){
        delete m[i];
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &obj){
    for (size_t i = 0; i < 4; i++){
        delete this->m[i];
    }
    for (size_t i = 0; i < 4; i++){
        this->m[i] = obj.m[i];
    }
    return *this;
}

MateriaSource::MateriaSource(MateriaSource &obj){
    *this = obj;
}

void MateriaSource::learnMateria(AMateria *m){
    for (size_t i = 0; i < 4; i++){
        if(!this->m[i]){
            this->m[i] = m;
            std::cout <<"hola :: "<<this->m[i]->getType()<<std::endl;
            break;
        }
    }
}

AMateria * MateriaSource::createMateria(std::string const& type){
    for (size_t i = 0; i < 4; i++){
        if (this->m[i]){
            if (this->m[i]->getType() == type){
                return this->m[i]->clone();
            }
        }
    }
    return 0;
}
