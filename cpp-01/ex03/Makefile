# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 10:30:36 by ylarhris          #+#    #+#              #
#    Updated: 2023/11/08 16:14:32 by ylarhris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= war

SRC		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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