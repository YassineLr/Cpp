# include "Easyfind.hpp"
# include <vector>
# include <list>
int main(){
    std::vector<int>    v;
    std::list<int>      l;

    v.push_back(12);
    v.push_back(13);
    v.push_back(1);
    v.push_back(2);
    v.push_back(14);
    v.push_back(17);
    v.push_back(18);
    v.push_back(14);
    try{
        std::cout << *easyfind(v,1) << std::endl;
    } catch (std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    }

    l.push_back(12);
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(6);
    l.push_back(0);
    try{
        std::cout << *easyfind(l,33) << std::endl;
    } catch (std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    }
}