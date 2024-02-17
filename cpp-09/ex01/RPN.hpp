# ifndef RPN_HPP
# define RPN_HPP

# include<iostream>
# include <stack>
class RPN {
    public :
        std::stack<int> numbers;
        RPN();
        ~RPN();
        RPN(const RPN &obj);
        RPN &operator=(RPN const &obj);

        void parser(std::string line);
    };
# endif