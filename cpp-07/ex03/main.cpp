# include "Array.hpp"

int main(){
    Array<int>A(10);

    for (int i = 0; i < 10; i++) {
        A[i] = 10 + i;
    }
    for (int i = 0; i < 10; i++){
        std::cout << A[i] << std::endl;
    }
    Array<int> B = A;
    for (int i = 0; i < 10; i++){
        std::cout << B[i] << std::endl;
    }
    try
    {
        std::cout << A[12] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << A.size() << std::endl;
}