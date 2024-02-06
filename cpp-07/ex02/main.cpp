# include "Array.hpp"

int main(){
     Array<int>A(5);


    for (int i = 0; i < 5; i++) {
        A[i] = 3 + i;
    }
    for (int i = 0; i < 5; i++){
        std::cout << A[i] << std::endl;
    }


    Array<int> B = A;
    for (int i = 0; i < 3; i++){
        std::cout << B[i] << std::endl;
    }
    try {
        std::cout << A[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << A.size() << std::endl;

}