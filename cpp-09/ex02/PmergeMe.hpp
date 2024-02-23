# ifndef PmergeMe_hpp
# define PmergeMe_hpp

# include <iostream>
# include <vector>
# include <algorithm>

class PmergeMe
{
    private:
        std::vector<int> inputArgs;
        std::vector<std::pair<int, int> > pairs;
        std::vector<int> sorted;
    public:
        PmergeMe();
        ~PmergeMe();
        std::vector<std::pair<int, int> > getPairs() const;
        std::vector<int> getInputArgs() const;
        std::vector<int> getSorted() const{
            return this->sorted;
        };

        void    pairing();
        void    insertingInMainChain();
        void    sortingGroups(void);
        void    sortingPairs(void);
        void    argsParser(char **av, int ac);
};

bool containOnlyDigits(std::string number);
# endif