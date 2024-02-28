# include "BitcoinExchange.hpp"

int main(int ac, char **av){

    if (ac != 2) {
         std::cerr << "Bad arguments !" << std::endl;
        return 0;
    }
    BitcoinExchange     btc;
    std::ifstream       db("data.csv");
    std::ifstream       input(av[1]);
    
    btc.DataBaseParser(db);
    btc.inputParser(input);
}