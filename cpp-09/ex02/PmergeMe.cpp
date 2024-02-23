# include "PmergeMe.hpp"

PmergeMe::PmergeMe(){

}

PmergeMe::~PmergeMe(){

}

std::vector<int> PmergeMe::getInputArgs() const{
    return inputArgs;
}

std::vector<std::pair<int, int> > PmergeMe::getPairs() const{
    return pairs;
}


bool containOnlyDigits(std::string number){
    if(number.find_first_not_of("0123456789") != std::string::npos)
        throw std::invalid_argument("ERROR");
    return true;
}

void PmergeMe::pairing(){
    for (size_t i = 0; i < inputArgs.size() - 1; i += 2) {
        pairs.push_back(std::make_pair(inputArgs[i], inputArgs[i+1]));
    }
    if (inputArgs.size() % 2){
        pairs.push_back(std::make_pair(inputArgs[inputArgs.size() - 1], -1));
    }
}

void PmergeMe::sortingPairs(){
    for (std::vector<std::pair<int , int> >::iterator it = pairs.begin() ; it != pairs.end(); it++){
        if(it->first < it->second) {
            int tmp;
            tmp = it->first;
            it->first = it->second;
            it->second = tmp;
        }
    }
}

void quicksort(std::vector<std::pair<int, int>>& arr, int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2].first;

    while (i <= j) {
        while (arr[i].first < pivot) 
            i++;
        while (arr[j].first > pivot) 
            j--;
        if (i <= j) {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (left < j) 
        quicksort(arr, left, j);
    if (i < right) 
        quicksort(arr, i, right);
}

void PmergeMe::sortingGroups(){
    quicksort(pairs, 0, pairs.size()-1);
}



void PmergeMe::insertingInMainChain(){
    for (auto it = pairs.begin(); it != pairs.end() ; it++) {
        sorted.push_back(it->first);
    } for (auto it = pairs.begin(); it != pairs.end() ; it++) {
        if(it->second >= 0){
            auto itt = std::lower_bound(sorted.begin(), sorted.end(), it->second);
            sorted.insert(itt, it->second);
        }
    }
}

void PmergeMe::argsParser(char **av, int ac){
    int i = 1;
    while (i < ac) {
        if(containOnlyDigits(av[i])){
            inputArgs.push_back(atoi(av[i]));
        }
        i++;
    }
}
