NAME	= Animal

SRC		= Animal.cpp main.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJ		= ${SRC:.cpp=.o}

CXX		= c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

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