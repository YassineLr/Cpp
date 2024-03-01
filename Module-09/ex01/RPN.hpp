# ifndef RPN_HPP
# define RPN_HPP

# include<iostream>
# include <stack>
# include <cstring>
# include <string>
# include <cstdlib>

class RPN {
    public :
        std::stack<int> numbers;
        int             res;
        RPN();
        ~RPN();
        RPN(const RPN &obj);
        RPN &operator=(RPN const &obj);

        void pushToStack(std::string token);
        bool rpnOperation(std::string line);
        void checkResult();
        void rpn(std::string line);
    };

# endif