# include "Span.hpp"

Span::Span():_N(0){};

Span::Span(unsigned int n):_N(n){};

Span::~Span(){};

Span& Span::operator =(const Span &obj){
    this->_N = obj._N;
    this->container = obj.container;
    return *this;
}

Span::Span(const Span &obj):_N(obj._N), container(obj.container){
}

void Span::addNumber(int n){
    try {
        checker();
        container.push_back(n);
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}

bool Span::checker(){
    if(this->_N <= container.size())
        throw(std::out_of_range("The container is full enough"));
    return 1;
}

int Span::longestSpan(){
    try{
        if (container.size()  < 2)
            throw(std::out_of_range("No Longest Span found"));
        std::sort(container.begin(), container.end());
        return container[container.size() - 1] - container[0];
    } catch (std::out_of_range &e){
        std::cout << e.what() << std::endl;
    }
    return -1;
}

int Span::shortestSpan(){
    try{
        if (container.size()  < 2)
            throw(std::out_of_range("No Shortest Span found"));
        std::sort(container.begin(), container.end());
        std::vector<int> diff(container.size());
        std::adjacent_difference(container.begin(), container.end(), diff.begin());
        return *std::min_element(diff.begin() + 1, diff.end());
    } catch (std::out_of_range &e){
        std::cout << e.what() << std::endl;
    }
    return -1;
}

std::vector<int> Span::getContainer() const {
    return this->container;
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end){
    srand(time(NULL));

    for (std::vector<int>::iterator it = start; it != end; ++it){
        addNumber(rand());
    }
}