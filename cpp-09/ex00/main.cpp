# include "BitcoinExchange.hpp"

int main(int ac, char **av){
    BitcoinExchange     btc;
    std::ifstream       input("input.txt");
    std::ifstream       db("data.csv");

    btc.DataBaseParser(db);

    // for (auto &[key, value] : btc.data)
    // {
    //     std::cout <<"{"<< key << "}"<< " val:" << value << std::endl;
    // }
    // std::cout << "=>"<< btc.data["2009-01-02"]<< std::endl;
    btc.inputParser(input);
    
}