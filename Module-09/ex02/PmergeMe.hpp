# ifndef PmergeMe_hpp
# define PmergeMe_hpp

# include <iostream>
# include <vector>
# include <deque>
# include <algorithm>

class PmergeMe
{
    private:
        std::vector<int>                    vInputArgs;
        std::deque<int>                     dInputArgs;
        std::vector<int>                    vSorted;
        std::deque<int>                     dSorted;
        std::vector<std::pair<int, int> >   vPairs;
        std::deque<std::pair<int, int> >    dPairs;
        double                              vStartTime;
        double                              dStartTime;
        double                              vEndTime;
        double                              dEndTime;

    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(PmergeMe const &other);

        void    vPairing();
        void    dPairing();
        void    insertingInVMainChain();
        void    insertingInDMainChain();
        void    sortingVGroups(void);
        void    sortingDGroups(void);
        void    sortingVPairs(void);
        void    sortingDPairs(void);
        void    displayInputArgs(void);
        void    argsParser(char **av, int ac);
        void    displaySorted(void);
        void    containerPerformance(void);
};

bool containOnlyDigits(std::string number);
# endif