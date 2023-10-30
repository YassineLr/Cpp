

#include<iostream>

int main(int ac, char **av)
{
    std:: string str;

    if(ac > 1){
        for(int i=1; i < ac ; i++){
            str = av[i];
            for (size_t j = 0; j < str.size() ; j++){
                    str[j] = toupper(str[j]);
                std :: cout << str[j];
            }
        }
    }
    else
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
}