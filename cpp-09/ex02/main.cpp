# include "PmergeMe.hpp"

int main(int ac , char **av){
    PmergeMe    sorter;
    
    try
    {
        sorter.argsParser(av, ac);
        sorter.displayInputArgs();

        sorter.vPairing();
        sorter.sortingVPairs();
        sorter.sortingVGroups();
        sorter.insertingInVMainChain();

        sorter.dPairing();
        sorter.sortingDPairs();
        sorter.sortingDGroups();
        sorter.insertingInDMainChain();
        sorter.displaySorted();
        sorter.containerPerformance();
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}