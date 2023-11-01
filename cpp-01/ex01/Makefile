# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 06:46:05 by ylarhris          #+#    #+#              #
#    Updated: 2023/11/01 07:51:33 by ylarhris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombieHorde

SRC		= Zombie.cpp zombieHorde.cpp main.cpp

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