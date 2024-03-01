# ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <array>

template <typename T>
class Array
{
    private:
        T               *_a;
        unsigned int    _n;
    public:
        Array():_a(NULL), _n(0){};
        ~Array(){};
        Array(unsigned int n):_a(new T[n]()), _n(n){};
        
        Array& operator=(const Array &obj){
            if (this != obj) {
                delete this->_a;
                this->_a = new T[obj._n]();
                for (size_t i = 0; i < obj._n; i++) {
                    this->_a[i] = obj._a[i];
                }
            }
            return *this;
        };

        unsigned int    size() const{
            return this->_n;
        };

        Array(Array const &obj){
            this->_a = new T[obj._n];
            this->_n = obj._n;
            for (size_t i = 0; i < obj._n; i++){
                this->_a[i] = obj._a[i];
            }
        };

        T& operator[](unsigned int index) {
            if(index >= this->_n)
                throw std::out_of_range("Index out of bounds");
            return _a[index];
        };

        const T& operator[](unsigned int index) const {
            if(index >= this->_n)
                throw std::out_of_range("Index out of bounds");
            return _a[index];
        };
};


# endif