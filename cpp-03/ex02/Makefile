# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 05:51:20 by ylarhris          #+#    #+#              #
#    Updated: 2023/11/22 06:02:21 by ylarhris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= FragTrap

SRC		= ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp

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