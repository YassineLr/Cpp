# ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <cstdlib>
# include <vector>
# include <map>

class BitcoinExchange
{
    public:
        std::map<std::string , std::string> data;
        BitcoinExchange(){};
        ~BitcoinExchange(){};
        
        void    DataBaseParser(std::ifstream &os);
        void    inputParser(std::ifstream &os);
};

bool parseOneLine(std::string line);
#endif