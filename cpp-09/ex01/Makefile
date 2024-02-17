NAME	= btc

SRC		= main.cpp RPN.cpp

OBJ		= ${SRC:.cpp=.o}

CXX		= c++

CPPFLAGS = -std=c++98 #-fsanitize=address -g3 #-Wall -Wextra -Werror

RM		= rm -rf

all	: $(NAME)

${NAME}	: ${OBJ}
		${CXX} $(CPPFLAGS) $(OBJ) -o $(NAME)

clean   :
		${RM} ${OBJ}

fclean	: clean
	${RM} $(NAME)

re		: fclean all

.PHONY	:	all fclean re clean