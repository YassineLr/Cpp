# define MUTANTSTACK_HPP

# include <iostream>
#include <stack>
#include <deque>

template <typename T, typename container=std::deque<T> >

class MutantStack : public std::stack<T, container>
{
    public:
        MutantStack(){};
        ~MutantStack(){};
        MutantStack(const MutantStack &obj) : std::stack<T>(obj){};
        MutantStack& operator=(MutantStack &obj){
            if(this != obj){
                std::stack<T>::operator=(obj);
            }
        };

        typedef  typename container::iterator iterator;
        typedef  typename container::const_iterator const_iterator;

        iterator begin(){
            return this->c.begin();
        }
        iterator end(){
            return this->c.end();
        }
        const_iterator begin() const {
            return this->c.begin();
        }
        const_iterator end() const {
            return this->c.end();
        }
};
