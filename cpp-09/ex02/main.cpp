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

        for (auto pair : sorter.getPairs()){
            std::cout << pair.first << " " << pair.second << std::endl;
        }
        std::cout << "--------" << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    for (auto pair : sorter.getPairs()){
        std::cout << pair.first << " " << pair.second << std::endl;
    }
    std::cout <<  "Sorted vector" << std::endl;

    for (auto pair : sorter.getSorted()){
        std::cout << pair << std::endl;
    }

}