# include "MateriaSource.hpp"


MateriaSource::MateriaSource(){

}

MateriaSource::~MateriaSource(){
    for (size_t i = 0; i < 4; i++){
        if(m[i]){
            delete m[i];
        }
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &obj){
    for (size_t i = 0; i < 4; i++){
        if(obj.m[i])
            this->m[i] = obj.m[i];
    }
}

MateriaSource::MateriaSource(MateriaSource &obj){
    *this = obj;
}

void MateriaSource::learnMateria(AMateria *m){
    for (size_t i = 0; i < 4; i++){
        if(!this->m[i]){
            this->m[i] = m;
            break;
        }
    }
}

AMateria * MateriaSource::createMateria(std::string const& type){
    for (size_t i = 0; i < 4; i++){
        if (this->m[i]->getType() == type){
            return this->m[i]->clone();
        }
    }
    return 0;
}
