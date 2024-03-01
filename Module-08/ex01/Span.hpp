# ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>

class Span
{
    private:
        unsigned int        _N;
        std::vector<int>    container;
    public:
        Span();
        ~Span();
        Span(const Span &obj);
        Span(unsigned int N);
        Span &operator=(const Span &obj);
        
        void                addNumber(int n);
        std::vector<int>    getContainer() const ;
        int                 shortestSpan();
        int                 longestSpan();
        bool                checker();
        void                addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
};
# endif
