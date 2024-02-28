# include "PmergeMe.hpp"

PmergeMe::PmergeMe(){

}

PmergeMe::~PmergeMe(){

}


bool containOnlyDigits(std::string number){
    if(number.find_first_not_of("0123456789") != std::string::npos)
        throw std::invalid_argument("ERROR");
    return true;
}

void PmergeMe::vPairing(){
    vStartTime = clock();
    for (size_t i = 0; i < vInputArgs.size() - 1; i += 2) {
        vPairs.push_back(std::make_pair(vInputArgs[i], vInputArgs[i+1]));
    }
    if (vInputArgs.size() % 2){
        vPairs.push_back(std::make_pair(vInputArgs[vInputArgs.size() - 1], -1));
    }
}

void PmergeMe::dPairing(){
    dStartTime = clock();
    for (size_t i = 0; i < dInputArgs.size() - 1; i += 2) {
        dPairs.push_back(std::make_pair(dInputArgs[i], dInputArgs[i+1]));
    }
    if (dInputArgs.size() % 2){
        dPairs.push_back(std::make_pair(dInputArgs[dInputArgs.size() - 1], -1));
    }
}

void PmergeMe::sortingVPairs(){
    for (std::vector<std::pair<int , int> >::iterator it = vPairs.begin() ; it != vPairs.end(); it++){
        if(it->first < it->second) {
            int tmp;
            tmp = it->first;
            it->first = it->second;
            it->second = tmp;
        }
    }
}

void PmergeMe::sortingDPairs(){
    for (std::deque<std::pair<int , int> >::iterator it = dPairs.begin() ; it != dPairs.end(); it++){
        if(it->first < it->second) {
            int tmp;
            tmp = it->first;
            it->first = it->second;
            it->second = tmp;
        }
    }
}


void quicksort(std::vector<std::pair<int, int> >& arr, int left, int right) {
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

void PmergeMe::sortingVGroups(){
    quicksort(vPairs, 0, vPairs.size()-1);
}

void PmergeMe::sortingDGroups(){
    std::sort(dPairs.begin(), dPairs.end());
}

void PmergeMe::insertingInVMainChain(){
    for (std::vector<std::pair<int, int> >::iterator it = vPairs.begin(); it != vPairs.end() ; it++) {
        vSorted.push_back(it->first);
    } for (std::vector<std::pair<int, int> >::iterator it = vPairs.begin(); it != vPairs.end() ; it++) {
        if(it->second >= 0){
            std::vector<int>::iterator itt = std::lower_bound(vSorted.begin(), vSorted.end(), it->second);
            vSorted.insert(itt, it->second);
        }
    }
    vEndTime = clock();
}

void PmergeMe::insertingInDMainChain(){
    for (std::deque<std::pair<int, int> >::iterator it = dPairs.begin(); it != dPairs.end() ; it++) {
        dSorted.push_back(it->first);
    } for (std::deque<std::pair<int, int> >::iterator it = dPairs.begin(); it != dPairs.end() ; it++) {
        if(it->second >= 0){
            std::deque<int>::iterator itt = std::lower_bound(dSorted.begin(), dSorted.end(), it->second);
            dSorted.insert(itt, it->second);
        }
    }
    dEndTime = clock();
}

void PmergeMe::argsParser(char **av, int ac){
    int i = 1;
    if (ac <= 1)
        throw std::invalid_argument("ERROR: No arguments provided.");
    while (i < ac) {
        if(containOnlyDigits(av[i])){
            vInputArgs.push_back(atoi(av[i]));
            dInputArgs.push_back(atoi(av[i]));
        }
        i++;
    }
}

PmergeMe::PmergeMe(PmergeMe const &other){
    *this = other;
}

void PmergeMe::displayInputArgs(){

    std::cout << "Before: ";
    for (size_t i = 0; i < vInputArgs.size(); i++){
        if (i == 5 && vInputArgs.size() > 5){
            std::cout << "[...] "; 
            break;
        }
        std::cout << vInputArgs[i] << " ";
    }
    std::cout << std::endl;
}



void PmergeMe::displaySorted(){
    std::cout << "After: ";
    for (size_t i = 0; i < vSorted.size(); i++){
        if (i == 5 && vSorted.size() > 5){
            std::cout << "[...] "; 
            break;
        }
        std::cout << vSorted[i] << " ";
    }
    std::cout << std::endl;
}


void PmergeMe::containerPerformance(void){
    double timeV = 1000.0 * (vEndTime - vStartTime) / CLOCKS_PER_SEC;
	double timeD = 1000.0 * (dEndTime - dStartTime) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << vInputArgs.size() << " elements with std::vector : " << timeV << " us" << std::endl;
	std::cout << "Time to process a range of " << dInputArgs.size() << " elements with std::deque : " << timeD << " us" << std::endl;

}
