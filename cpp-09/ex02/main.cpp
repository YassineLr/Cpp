# include "PmergeMe.hpp"

int main(int ac , char **av){
    PmergeMe sorter;
    
    try
    {
        sorter.argsParser(av, ac);
        sorter.pairing();
        sorter.sortingPairs();
        sorter.sortingGroups();
        sorter.insertingInMainChain();
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}