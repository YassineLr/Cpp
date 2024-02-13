# include "BitcoinExchange.hpp"

int main(int ac, char **av){
    BitcoinExchange     btc;
    std::ifstream       input("input.txt");

    btc.inputParser(input);

    for (auto &[key, value] : btc.data)
    {
        std::cout << key << " val:" << value << std::endl;
    }
    
}