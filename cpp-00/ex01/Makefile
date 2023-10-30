NAME	= phonebook

SRC		= phonebook.cpp contacts.cpp

OBJ		= ${SRC:.cpp=.o}

CPPFLAGS = -std=c++98 #-Wall -Wextra -Werror

RM		= rm -rf

all	: $(NAME)

${NAME}	: ${OBJ}
		c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean   :
		${RM} ${OBJ}

fclean	: clean
	${RM} $(NAME)

re		: fclean all

.PHONY	:	all fclean re clean